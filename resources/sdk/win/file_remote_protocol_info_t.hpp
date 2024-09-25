#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_remote_protocol_info_t.start.hpp"
namespace win
{
    // [struct _FILE_REMOTE_PROTOCOL_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_remote_protocol_info_t                                             
    {                                                                              
        struct u0_generic_reserved_t                                               
        {                                                                          
                                                                                   
            SDK_MAGIC_PROPERTIES( "_FILE_REMOTE_PROTOCOL_INFO.GenericReserved.$", 0x20, true, 0x56c6a38a19aab2ea );                       
            SDK_FIXED_SIZE( u0_generic_reserved_t, 0x20 );                         
        };                                                                         
                                                                                   
        union u4_protocol_specific_t                                               
        {                                                                          
            struct u8_smb2_t                                                       
            {                                                                      
                struct u12_server_t                                                
                {                                                                  
                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
                    //                                                             
                    _m08 uint32_t capabilities;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Capabilities
                                                                                   
                    SDK_MAGIC_PROPERTIES( "_FILE_REMOTE_PROTOCOL_INFO.ProtocolSpecific.Smb2.Server.$", 0x4, true, 0xb77166884266c5c1 );                                                
                    SDK_FIXED_SIZE( u12_server_t, 0x4 );                                                
                };                                                                 
                                                                                   
                struct u16_share_t                                                 
                {                                                                  
                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
                    //                                                             
                    _m10 uint32_t capabilities;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Capabilities
                    _m11 uint32_t caching_flags;                                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CachingFlags
                                                                                   
                    SDK_MAGIC_PROPERTIES( "_FILE_REMOTE_PROTOCOL_INFO.ProtocolSpecific.Smb2.Share.$", 0x8, true, 0xb744764e9d8794eb );                                                 
                    SDK_FIXED_SIZE( u16_share_t, 0x8 );                                                 
                };                                                                 
                                                                                   
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
                //                                                                 
                _m09 u12_server_t               server;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Server
                _m12 u16_share_t                share;                               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Share
                                                                                   
                SDK_MAGIC_PROPERTIES( "_FILE_REMOTE_PROTOCOL_INFO.ProtocolSpecific.Smb2.$", 0xc, true, 0x682db43ab2733ba6 );                                   
                SDK_FIXED_SIZE( u8_smb2_t, 0xc );                                   
            };                                                                     
                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                                                     
            _m13 u8_smb2_t                             smb2;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Smb2
                                                                                   
            SDK_MAGIC_PROPERTIES( "_FILE_REMOTE_PROTOCOL_INFO.ProtocolSpecific.$", 0x40, true, 0xc2cdd65348957fd0 );                            
            SDK_FIXED_SIZE( u4_protocol_specific_t, 0x40 );                            
        };                                                                         
                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                         
        _m00 uint16_t                                       structure_version;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StructureVersion
        _m01 uint16_t                                       structure_size;          //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .StructureSize
        _m02 uint32_t                                       protocol;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Protocol
        _m03 uint16_t                                       protocol_major_version;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProtocolMajorVersion
        _m04 uint16_t                                       protocol_minor_version;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .ProtocolMinorVersion
        _m05 uint16_t                                       protocol_revision;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ProtocolRevision
        _m06 uint32_t                                       flags;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m07 u0_generic_reserved_t                          generic_reserved;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .GenericReserved
        _m14 u4_protocol_specific_t                         protocol_specific;       //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .ProtocolSpecific
                                                                                   
        SDK_MAGIC_PROPERTIES( "_FILE_REMOTE_PROTOCOL_INFO.$", 0x74, true, 0x1ba214bd05d3b0b1 );                       
        SDK_FIXED_SIZE( file_remote_protocol_info_t, 0x74 );                       
    };                                                                             
};
#include "magic/file_remote_protocol_info_t.end.hpp"
SDK_VERIFY( struct win::file_remote_protocol_info_t::u0_generic_reserved_t, 0x20 );
SDK_VERIFY( struct win::file_remote_protocol_info_t::u4_protocol_specific_t::u8_smb2_t::u12_server_t, 0x4 );
SDK_VERIFY( struct win::file_remote_protocol_info_t::u4_protocol_specific_t::u8_smb2_t::u16_share_t, 0x8 );
SDK_VERIFY( struct win::file_remote_protocol_info_t::u4_protocol_specific_t::u8_smb2_t, 0xc );
SDK_VERIFY( union win::file_remote_protocol_info_t::u4_protocol_specific_t, 0x40 );
SDK_VERIFY( struct win::file_remote_protocol_info_t, 0x74 );
