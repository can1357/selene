#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/per_processor_context_t.start.hpp"
namespace pop
{
    // [struct _POP_PER_PROCESSOR_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct per_processor_context_t                              
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                      
        _m00 uint8_t*                uncompressed_data;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UncompressedData
        _m01 void*                   mapping_va;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MappingVa
        _m02 void*                   xpress_encode_workspace;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .XpressEncodeWorkspace
        _m03 uint8_t*                compressed_data_buffer;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CompressedDataBuffer
        _m04 uint64_t                copy_ticks;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CopyTicks
        _m05 uint64_t                compress_ticks;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CompressTicks
        _m06 uint64_t                bytes_copied;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BytesCopied
        _m07 uint64_t                pages_processed;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PagesProcessed
        _m08 uint64_t                decompress_ticks;            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DecompressTicks
        _m09 uint64_t                resume_copy_ticks;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ResumeCopyTicks
        _m10 uint64_t                shared_buffer_ticks;         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .SharedBufferTicks
        _m11 sdk::array<uint64_t, 2> decompress_ticks_by_method;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .DecompressTicksByMethod
        _m12 sdk::array<uint64_t, 2> decompress_size_by_method;   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .DecompressSizeByMethod
        _m13 uint32_t                compress_count;              //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .CompressCount
        _m14 uint32_t                huff_compress_count;         //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .HuffCompressCount
                                                                
        SDK_MAGIC_PROPERTIES( "_POP_PER_PROCESSOR_CONTEXT.$", 0x80, true, 0x313bd40e1e9d5564 );                           
        SDK_FIXED_SIZE( per_processor_context_t, 0x80 );                           
    };                                                          
};
#include "magic/per_processor_context_t.end.hpp"
SDK_VERIFY( struct pop::per_processor_context_t, 0x80 );
