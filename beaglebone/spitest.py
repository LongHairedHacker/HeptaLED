import spidev
import time
spi = spidev.SpiDev()
# create spi object
spi.open(1,0)
# open spi port 1, device (CS) 0
try:
	while True:
		resp = spi.xfer2([0xAA])
		# transfer one byte
		time.sleep(0.1)
		# sleep for 0.1 seconds

except KeyboardInterrupt:
	# Ctrl+C pressed, so...
	spi.close()

