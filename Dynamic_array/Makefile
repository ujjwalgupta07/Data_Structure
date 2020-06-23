CXX = g++ -std=c++11 -Wall -g

INCDIR 	 = include
BINDIR 	 = bin
OBJDIR 	 = obj
LIBDIR 	 = lib
SRCDIR 	 = src
MAINFILE = mainString.cpp

SRCS =  dynamicArray.cpp

OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

INCLUDE = -I./$(INCDIR)
LDFLAGS = -L./$(LIBDIR)

TRGT = $(BINDIR)/testDynamicBin

all:	$(TRGT)

$(TRGT):$(LIBDIR)/libtestDynamic.a
	$(CXX) test/$(MAINFILE) $(INCLUDE) $(LDFLAGS) -ltestDynamic -o $(BINDIR)/testDynamic

$(LIBDIR)/libtestDynamic.a: $(OBJS)
	ar -crs $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) -c $< $(INCLUDE) -o $@

clean:
	rm -f $(OBJDIR)/*.o $(LIBDIR)/*.a $(BINDIR)/testDynamicBin
