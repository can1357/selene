#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multi_string_iterator_t.start.hpp"
namespace win
{
    // [class MultiStringIterator]
    // => Windows 11
    //
    class multi_string_iterator_t        
    {                                    
        // Windows 11                    
        //                               
        _m00 const wchar_t* current;       //{ +0x0000    } | ._current
        _m01 bool           past_the_end;  //{ +0x0008    } | ._pastTheEnd
                                         
        SDK_MAGIC_PROPERTIES( "MultiStringIterator.$", 0x0, false, 0x48cad88358b45d7f );             
        SDK_FIXED_SIZE( multi_string_iterator_t, 0x10 );             
    };                                   
};
#include "magic/multi_string_iterator_t.end.hpp"
SDK_VERIFY( class win::multi_string_iterator_t, 0x10 );
