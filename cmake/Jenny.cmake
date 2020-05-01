macro(add_global_linker)
   set (JENNY_LINK_FLAGS "${JENNY_LINK_FLAGS} ${ARGV}")
endmacro()

macro(add_global_libs)
   set (JENNY_LIBS "${JENNY_LIBS}" ${ARGV})
endmacro()
