#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_mailslot_peek_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_MAILSLOT_PEEK_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_mailslot_peek_buffer_t    
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t read_data_available;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReadDataAvailable
        _m01 uint32_t number_of_messages;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfMessages
        _m02 uint32_t message_length;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MessageLength
                                          
        SDK_MAGIC_PROPERTIES( "_FILE_MAILSLOT_PEEK_BUFFER.$", 0xc, true, 0x3d8878dfcb64f13c );                    
        SDK_FIXED_SIZE( file_mailslot_peek_buffer_t, 0xc );                    
    };                                    
};
#include "magic/file_mailslot_peek_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_mailslot_peek_buffer_t, 0xc );
