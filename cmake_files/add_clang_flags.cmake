macro (add_cxx_compiler_flags)
    foreach (flag ${ARGV})
        set (all_flags "${all_flags} ${flag}")
    endforeach ()
endmacro ()

function(add_clang_flags)
        add_cxx_compiler_flags (-Weverything)
        add_cxx_compiler_flags (-Wno-c++98-compat)
        set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${all_flags}" PARENT_SCOPE)
endfunction()
