$fn=180;

//filename = "rj45lid.dxf";
filename = "he10lid.dxf";

difference() {
	union() {
		linear_extrude(height = 1.5, convexity = 10)
			import (file = filename, layer = "Outline1");
		linear_extrude(height = 2.5, convexity = 10)
			import (file = filename, layer = "Outline2");
	}
	linear_extrude(height = 4, convexity = 10)
			import (file = filename, layer = "Cutout");
}