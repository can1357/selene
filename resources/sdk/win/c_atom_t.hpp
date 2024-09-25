#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_atom_t.start.hpp"
namespace win
{
    // [class CAtom]
    // => Windows 10 v1607
    //
    class c_atom_t           
    {                        
        // Windows 10 v1607       
        //                   
        _m00 uint16_t m_atom;  //{ +0x0000    } | .m_atom
                             
        SDK_MAGIC_PROPERTIES( "CAtom.$", 0x0, false, 0x72c1cff0074c58d6 );       
        SDK_FIXED_SIZE( c_atom_t, 0x2 );       
    };                       
};
#include "magic/c_atom_t.end.hpp"
SDK_VERIFY( class win::c_atom_t, 0x2 );
