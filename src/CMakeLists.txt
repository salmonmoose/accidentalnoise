include_directories(
	"${CMAKE_CURRENT_SOURCE_DIR}/../include"
)

get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
foreach(dir ${dirs})
  message(STATUS "dir='${dir}'")
endforeach()

add_library(
	accidentalnoise
	cellulargen.cpp
#	hsv.cpp
	implicitautocorrect.cpp
	implicitbasisfunction.cpp
	implicitbias.cpp
	implicitblend.cpp
	implicitbrightcontrast.cpp
	implicitcache.cpp
	implicitcellular.cpp
	implicitclamp.cpp
#	implicitcombiner.cpp
	implicitconstant.cpp
	implicitcos.cpp
#	implicitextractrgbachannel.cpp
	implicitfloor.cpp
	implicitfractal.cpp
	implicitfunctiongradient.cpp
#	implicitgain.cpp
	implicitgradient.cpp
	implicitgrid.cpp
	implicitinvert.cpp
	implicitjulia.cpp
	implicitlog.cpp
	implicitpow.cpp
#	implicitrgbadotproduct.cpp
	implicitrotatedomain.cpp
	implicitscaledomain.cpp
	implicitscaleoffset.cpp
	implicitselect.cpp
	implicitsequence.cpp
	implicitsin.cpp
	implicitsphere.cpp
	implicittan.cpp
	implicittiers.cpp
#	implicittranslatedomain.cpp
#	mapping.cpp
	noise_gen.cpp
	noise_lut.cpp
#	rgbablend.cpp
#	rgbablendops.cpp
#	rgbacomposechannels.cpp
#	rgbaconstant.cpp
#	rgbahsvtorgba.cpp
#	rgbaimplicitgrayscale.cpp
#	rgbanormalize.cpp
#	rgbargbatohsv.cpp
#	rgbarotatecolor.cpp
#	rgbaselect.cpp
)

target_link_libraries(accidentalnoise)

set_target_properties(accidentalnoise PROPERTIES DEBUG_POSTFIX _d)