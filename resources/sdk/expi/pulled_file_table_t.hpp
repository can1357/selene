#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pulled_file_table_t.start.hpp"
namespace expi
{
    // [struct _EXP_PULLED_FILE_TABLE]
    // => Windows 11
    //
    struct pulled_file_table_t                       
    {                                                
        // Windows 11                                
        //                                           
        _m00 int32_t                 number_of_files;  //{ +0x0000    } | .NumberOfFiles
        _m01 int32_t                 table_size;       //{ +0x0004    } | .TableSize
        _m02 sdk::array<uint64_t, 1> hashes;           //{ +0x0008    } | .Hashes
                                                     
        SDK_MAGIC_PROPERTIES( "_EXP_PULLED_FILE_TABLE.$", 0x0, false, 0x73088658fa09258d );                
        SDK_FIXED_SIZE( pulled_file_table_t, 0x10 );                
    };                                               
};
#include "magic/pulled_file_table_t.end.hpp"
SDK_VERIFY( struct expi::pulled_file_table_t, 0x10 );
