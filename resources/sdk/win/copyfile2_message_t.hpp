#pragma once
#include <sdkgen/support_library.hpp>
#include "copyfile2_copy_phase_t.hpp"
#include "copyfile2_message_type_t.hpp"

#include "magic/copyfile2_message_t.start.hpp"
namespace win
{
    // [struct COPYFILE2_MESSAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct copyfile2_message_t                                                                                
    {                                                                                                         
        union u0_info_t                                                                                       
        {                                                                                                     
            struct u4_chunk_started_t                                                                         
            {                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
                //                                                                                            
                _m02 uint32_t dw_stream_number;                                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStreamNumber
                _m03 uint32_t dw_reserved;                                                                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwReserved
                _m04 void*    h_source_file;                                                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hSourceFile
                _m05 void*    h_destination_file;                                                               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hDestinationFile
                _m06 uint64_t uli_chunk_number;                                                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .uliChunkNumber
                _m07 uint64_t uli_chunk_size;                                                                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .uliChunkSize
                _m08 uint64_t uli_stream_size;                                                                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .uliStreamSize
                _m09 uint64_t uli_total_file_size;                                                              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .uliTotalFileSize
                                                                                                              
                SDK_MAGIC_PROPERTIES( "COPYFILE2_MESSAGE.Info.ChunkStarted.$", 0x38, true, 0xaf9e3c05d9bb0c8d );                                               
                SDK_FIXED_SIZE( u4_chunk_started_t, 0x38 );                                                   
            };                                                                                                
                                                                                                              
            struct u8_chunk_finished_t                                                                        
            {                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
                //                                                                                            
                _m11 uint32_t dw_stream_number;                                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStreamNumber
                _m12 uint32_t dw_flags;                                                                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
                _m13 void*    h_source_file;                                                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hSourceFile
                _m14 void*    h_destination_file;                                                               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hDestinationFile
                _m15 uint64_t uli_chunk_number;                                                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .uliChunkNumber
                _m16 uint64_t uli_chunk_size;                                                                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .uliChunkSize
                _m17 uint64_t uli_stream_size;                                                                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .uliStreamSize
                _m18 uint64_t uli_stream_bytes_transferred;                                                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .uliStreamBytesTransferred
                _m19 uint64_t uli_total_file_size;                                                              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .uliTotalFileSize
                _m20 uint64_t uli_total_bytes_transferred;                                                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .uliTotalBytesTransferred
                                                                                                              
                SDK_MAGIC_PROPERTIES( "COPYFILE2_MESSAGE.Info.ChunkFinished.$", 0x48, true, 0x5cbf49c7161319e6 );                                                        
                SDK_FIXED_SIZE( u8_chunk_finished_t, 0x48 );                                                        
            };                                                                                                
                                                                                                              
            struct u12_stream_started_t                                                                       
            {                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
                //                                                                                            
                _m22 uint32_t dw_stream_number;                                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStreamNumber
                _m23 uint32_t dw_reserved;                                                                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwReserved
                _m24 void*    h_source_file;                                                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hSourceFile
                _m25 void*    h_destination_file;                                                               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hDestinationFile
                _m26 uint64_t uli_stream_size;                                                                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .uliStreamSize
                _m27 uint64_t uli_total_file_size;                                                              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .uliTotalFileSize
                                                                                                              
                SDK_MAGIC_PROPERTIES( "COPYFILE2_MESSAGE.Info.StreamStarted.$", 0x28, true, 0xbc7b15555ed5a78a );                                               
                SDK_FIXED_SIZE( u12_stream_started_t, 0x28 );                                                 
            };                                                                                                
                                                                                                              
            struct u16_stream_finished_t                                                                      
            {                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
                //                                                                                            
                _m29 uint32_t dw_stream_number;                                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStreamNumber
                _m30 uint32_t dw_reserved;                                                                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwReserved
                _m31 void*    h_source_file;                                                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hSourceFile
                _m32 void*    h_destination_file;                                                               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hDestinationFile
                _m33 uint64_t uli_stream_size;                                                                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .uliStreamSize
                _m34 uint64_t uli_stream_bytes_transferred;                                                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .uliStreamBytesTransferred
                _m35 uint64_t uli_total_file_size;                                                              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .uliTotalFileSize
                _m36 uint64_t uli_total_bytes_transferred;                                                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .uliTotalBytesTransferred
                                                                                                              
                SDK_MAGIC_PROPERTIES( "COPYFILE2_MESSAGE.Info.StreamFinished.$", 0x38, true, 0x7fac1ae88ae774cd );                                                        
                SDK_FIXED_SIZE( u16_stream_finished_t, 0x38 );                                                        
            };                                                                                                
                                                                                                              
            struct u20_poll_continue_t                                                                        
            {                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
                //                                                                                            
                _m38 uint32_t dw_reserved;                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwReserved
                                                                                                              
                SDK_MAGIC_PROPERTIES( "COPYFILE2_MESSAGE.Info.PollContinue.$", 0x4, true, 0x2b02b0ad6faf5621 );                                       
                SDK_FIXED_SIZE( u20_poll_continue_t, 0x4 );                                                   
            };                                                                                                
                                                                                                              
            struct u24_error_t                                                                                
            {                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
                //                                                                                            
                _m40 enum win::copyfile2_copy_phase_t copy_phase;                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CopyPhase
                _m41 uint32_t                         dw_stream_number;                                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwStreamNumber
                _m42 sdk::hresult                     hr_failure;                                               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hrFailure
                _m43 uint32_t                         dw_reserved;                                              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwReserved
                _m44 uint64_t                         uli_chunk_number;                                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .uliChunkNumber
                _m45 uint64_t                         uli_stream_size;                                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .uliStreamSize
                _m46 uint64_t                         uli_stream_bytes_transferred;                             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .uliStreamBytesTransferred
                _m47 uint64_t                         uli_total_file_size;                                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .uliTotalFileSize
                _m48 uint64_t                         uli_total_bytes_transferred;                              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .uliTotalBytesTransferred
                                                                                                              
                SDK_MAGIC_PROPERTIES( "COPYFILE2_MESSAGE.Info.Error.$", 0x38, true, 0x17a5b8e20351e938 );                                                        
                SDK_FIXED_SIZE( u24_error_t, 0x38 );                                                          
            };                                                                                                
                                                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
            //                                                                                                
            _m10 u4_chunk_started_t                                                chunk_started;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ChunkStarted
            _m21 u8_chunk_finished_t                                               chunk_finished;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ChunkFinished
            _m28 u12_stream_started_t                                              stream_started;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StreamStarted
            _m37 u16_stream_finished_t                                             stream_finished;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StreamFinished
            _m39 u20_poll_continue_t                                               poll_continue;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PollContinue
            _m49 u24_error_t                                                       error;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Error
                                                                                                              
            SDK_MAGIC_PROPERTIES( "COPYFILE2_MESSAGE.Info.$", 0x48, true, 0x3f351ba71c1b1997 );                           
            SDK_FIXED_SIZE( u0_info_t, 0x48 );                                                                
        };                                                                                                    
                                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                                    
        _m00 enum win::copyfile2_message_type_t                                                    type;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                                                                              dw_padding;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwPadding
        _m50 u0_info_t                                                                             info;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Info
                                                                                                              
        SDK_MAGIC_PROPERTIES( "COPYFILE2_MESSAGE.$", 0x50, true, 0x2e124af16b4320f1 );                        
        SDK_FIXED_SIZE( copyfile2_message_t, 0x50 );                                                          
    };                                                                                                        
};
#include "magic/copyfile2_message_t.end.hpp"
SDK_VERIFY( struct win::copyfile2_message_t::u0_info_t::u4_chunk_started_t, 0x38 );
SDK_VERIFY( struct win::copyfile2_message_t::u0_info_t::u8_chunk_finished_t, 0x48 );
SDK_VERIFY( struct win::copyfile2_message_t::u0_info_t::u12_stream_started_t, 0x28 );
SDK_VERIFY( struct win::copyfile2_message_t::u0_info_t::u16_stream_finished_t, 0x38 );
SDK_VERIFY( struct win::copyfile2_message_t::u0_info_t::u20_poll_continue_t, 0x4 );
SDK_VERIFY( struct win::copyfile2_message_t::u0_info_t::u24_error_t, 0x38 );
SDK_VERIFY( union win::copyfile2_message_t::u0_info_t, 0x48 );
SDK_VERIFY( struct win::copyfile2_message_t, 0x50 );
