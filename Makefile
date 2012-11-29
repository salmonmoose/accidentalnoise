CC = gcc
CXX = g++
RM = rm -f

LDFLAGS = $(shell root-config --libs)

SRCS = \
	./src/cellulargen.cpp \
	./src/hsv.cpp \
	./src/implicitautocorrect.cpp \
	./src/implicitbasisfunction.cpp \
	./src/implicitbias.cpp \
	./src/implicitblend.cpp \
	./src/implicitbrightcontrast.cpp \
	./src/implicitcache.cpp \
	./src/implicitcellular.cpp \
	./src/implicitclamp.cpp \
	./src/implicitcombiner.cpp \
	./src/implicitconstant.cpp \
	./src/implicitcos.cpp \
	./src/implicitextractrgbachannel.cpp \
	./src/implicitfloor.cpp \
	./src/implicitfractal.cpp \
	./src/implicitfunctiongradient.cpp \
	./src/implicitgain.cpp \
	./src/implicitgradient.cpp \
	./src/implicitinvert.cpp \
	./src/implicitpow.cpp \
	./src/implicitrgbadotproduct.cpp \
	./src/implicitrotatedomain.cpp \
	./src/implicitscaledomain.cpp \
	./src/implicitscaleoffset.cpp \
	./src/implicitselect.cpp \
	./src/implicitsequence.cpp \
	./src/implicitsin.cpp \
	./src/implicitsphere.cpp \
	./src/implicittiers.cpp \
	./src/implicittranslatedomain.cpp \
	./src/implicitxml.cpp \
	./src/mapping.cpp \
	./src/noise_gen.cpp \
	./src/noise_lut.cpp \
	./src/rgbablend.cpp \
	./src/rgbablendops.cpp \
	./src/rgbacomposechannels.cpp \
	./src/rgbaconstant.cpp \
	./src/rgbahsvtorgba.cpp \
	./src/rgbaimplicitgrayscale.cpp \
	./src/rgbanormalize.cpp \
	./src/rgbargbatohsv.cpp \
	./src/rgbarotatecolor.cpp \
	./src/rgbaselect.cpp \
	./src/pugixml.cpp

OBJS = $(subst .cpp,.o,$(SRCS))

.PHONY: default all release debug

default all: debug

release:	export EXTRA_CPPFLAGS := -O3
debug:		export EXTRA_CPPFLAGS := -DDEBUG -g

CPPFLAGS = \
	$(shell) \
	-ffast-math \
	-Wall \
	-Wextra \
	-std=c++0x \
	-I./include \
	$(EXTRA_CPPFLAGS)

release debug: libAccidentalNoise.a

libAccidentalNoise.a: $(OBJS)
	ar rcs ./lib/Linux/libAccidentalNoise.a $(OBJS)

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) *~ .dependcanton

include .depend
