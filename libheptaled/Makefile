OBJDIR = bin

CXX = clang++
CXXFLAGS = --std=c++11 
LDFLAGS = 


$(OBJDIR)/display.o : common.h digit.h display.h display.cpp 

all : start $(OBJDIR)/display.o
	@echo ":: Done !"

start :
	@echo " LibHeptaled"
	@echo "============="
	@echo ":: Building using $(CXX)"

$(OBJDIR)/%.o : %.cpp Makefile 
	mkdir -p $$(dirname $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR)/$(TARGET) : $(OBJDIR)/$(TARGET).o
	$(CXX) $+ $(LDFLAGS) -o $@

clean :
	@rm -rf $(OBJDIR)

