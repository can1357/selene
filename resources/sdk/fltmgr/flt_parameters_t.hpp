#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/fsinfoclass_t.hpp"
#include "../nt/device_text_type_t.hpp"
#include "../nt/bus_query_id_type_t.hpp"
#include "../nt/device_relation_type_t.hpp"
#include "../nt/file_information_class_t.hpp"
#include "../fs/filter_section_sync_type_t.hpp"
#include "../nt/device_usage_notification_type_t.hpp"
#include "../nt/directory_notify_information_class_t.hpp"

namespace cm { struct resource_list_t;                 }
namespace fs { struct filter_section_sync_output_t;    }
namespace io { struct resource_requirements_list_t;    }
namespace io { struct security_context_t;              }
namespace nt { struct device_capabilities_t;           }
namespace nt { struct device_object_t;                 }
namespace nt { struct eresource_t;                     }
namespace nt { struct file_get_quota_information_t;    }
namespace nt { struct file_network_open_information_t; }
namespace nt { struct file_object_t;                   }
namespace nt { struct guid_t;                          }
namespace nt { struct interface_t;                     }
namespace nt { struct irp_t;                           }
namespace nt { struct kprocess_t;                      }
namespace nt { struct mdl_t;                           }
namespace nt { struct vpb_t;                           }

#include "magic/flt_parameters_t.start.hpp"
namespace fltmgr
{
    // [union _FLT_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union flt_parameters_t                                                                                                                                    
    {                                                                                                                                                         
        struct u0_create_t                                                                                                                                    
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m00 struct io::security_context_t* security_context;                                                                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityContext
            _m01 uint32_t                       options;                                                                                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Options
            _m02 uint16_t                       file_attributes;                                                                                                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileAttributes
            _m03 uint16_t                       share_access;                                                                                                   //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .ShareAccess
            _m04 uint32_t                       ea_length;                                                                                                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EaLength
            _m05 void*                          ea_buffer;                                                                                                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EaBuffer
            _m06 int64_t                        allocation_size;                                                                                                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AllocationSize
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Create.$", 0x30, true, 0xc8e2501f1de02353 );                                                               
            SDK_FIXED_SIZE( u0_create_t, 0x30 );                                                                                                              
        };                                                                                                                                                    
                                                                                                                                                              
        struct u4_create_pipe_t                                                                                                                               
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m08 struct io::security_context_t* security_context;                                                                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityContext
            _m09 uint32_t                       options;                                                                                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Options
            _m10 uint16_t                       share_access;                                                                                                   //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .ShareAccess
            _m11 void*                          parameters;                                                                                                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Parameters
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.CreatePipe.$", 0x20, true, 0x55e0c495fb47ac2d );                                                           
            SDK_FIXED_SIZE( u4_create_pipe_t, 0x20 );                                                                                                         
        };                                                                                                                                                    
                                                                                                                                                              
        struct u8_create_mailslot_t                                                                                                                           
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m13 struct io::security_context_t* security_context;                                                                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityContext
            _m14 uint32_t                       options;                                                                                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Options
            _m15 uint16_t                       share_access;                                                                                                   //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .ShareAccess
            _m16 void*                          parameters;                                                                                                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Parameters
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.CreateMailslot.$", 0x20, true, 0x64f8c570c951dcc2 );                                                       
            SDK_FIXED_SIZE( u8_create_mailslot_t, 0x20 );                                                                                                     
        };                                                                                                                                                    
                                                                                                                                                              
        struct u8_read_t                                                                                                                                      
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m18 uint32_t          length;                                                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m19 uint32_t          key;                                                                                                                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
            _m20 int64_t           byte_offset;                                                                                                                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ByteOffset
            _m21 void*             read_buffer;                                                                                                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReadBuffer
            _m22 struct nt::mdl_t* mdl_address;                                                                                                                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MdlAddress
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Read.$", 0x28, true, 0x4807529a7ebe724e );                                                                 
            SDK_FIXED_SIZE( u8_read_t, 0x28 );                                                                                                                
        };                                                                                                                                                    
                                                                                                                                                              
        struct u12_write_t                                                                                                                                    
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m24 uint32_t          length;                                                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m25 uint32_t          key;                                                                                                                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
            _m26 int64_t           byte_offset;                                                                                                                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ByteOffset
            _m27 void*             write_buffer;                                                                                                                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WriteBuffer
            _m28 struct nt::mdl_t* mdl_address;                                                                                                                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MdlAddress
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Write.$", 0x28, true, 0x461283b5d0c182d3 );                                                                
            SDK_FIXED_SIZE( u12_write_t, 0x28 );                                                                                                              
        };                                                                                                                                                    
                                                                                                                                                              
        struct u16_query_file_information_t                                                                                                                   
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m30 uint32_t                          length;                                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m31 enum nt::file_information_class_t file_information_class;                                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileInformationClass
            _m32 void*                             info_buffer;                                                                                                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InfoBuffer
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.QueryFileInformation.$", 0x18, true, 0xc4f4c3796b4633d6 );                                                           
            SDK_FIXED_SIZE( u16_query_file_information_t, 0x18 );                                                                                             
        };                                                                                                                                                    
                                                                                                                                                              
        struct u20_set_file_information_t                                                                                                                     
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m34 uint32_t                          length;                                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m35 enum nt::file_information_class_t file_information_class;                                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileInformationClass
            _m36 struct nt::file_object_t*         parent_of_target;                                                                                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ParentOfTarget
            _m37 uint8_t                           replace_if_exists;                                                                                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReplaceIfExists
            _m38 uint8_t                           advance_only;                                                                                                //{ +0x0019    +0x0019    +0x0019    +0x0019    } | .AdvanceOnly
            _m39 uint32_t                          cluster_count;                                                                                               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ClusterCount
            _m40 void*                             delete_handle;                                                                                               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DeleteHandle
            _m41 void*                             info_buffer;                                                                                                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InfoBuffer
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.SetFileInformation.$", 0x28, true, 0x41685fb5585d770 );                                                           
            SDK_FIXED_SIZE( u20_set_file_information_t, 0x28 );                                                                                               
        };                                                                                                                                                    
                                                                                                                                                              
        struct u24_query_ea_t                                                                                                                                 
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m43 uint32_t          length;                                                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m44 void*             ea_list;                                                                                                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EaList
            _m45 uint32_t          ea_list_length;                                                                                                              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EaListLength
            _m46 uint32_t          ea_index;                                                                                                                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EaIndex
            _m47 void*             ea_buffer;                                                                                                                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EaBuffer
            _m48 struct nt::mdl_t* mdl_address;                                                                                                                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MdlAddress
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.QueryEa.$", 0x30, true, 0x9849b263194be0ac );                                                              
            SDK_FIXED_SIZE( u24_query_ea_t, 0x30 );                                                                                                           
        };                                                                                                                                                    
                                                                                                                                                              
        struct u28_set_ea_t                                                                                                                                   
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m50 uint32_t          length;                                                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m51 void*             ea_buffer;                                                                                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EaBuffer
            _m52 struct nt::mdl_t* mdl_address;                                                                                                                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MdlAddress
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.SetEa.$", 0x18, true, 0xe700c7163f140341 );                                                                
            SDK_FIXED_SIZE( u28_set_ea_t, 0x18 );                                                                                                             
        };                                                                                                                                                    
                                                                                                                                                              
        struct u32_query_volume_information_t                                                                                                                 
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m54 uint32_t               length;                                                                                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m55 enum nt::fsinfoclass_t fs_information_class;                                                                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FsInformationClass
            _m56 void*                  volume_buffer;                                                                                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VolumeBuffer
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.QueryVolumeInformation.$", 0x18, true, 0xd31e090df998196c );                                                         
            SDK_FIXED_SIZE( u32_query_volume_information_t, 0x18 );                                                                                           
        };                                                                                                                                                    
                                                                                                                                                              
        struct u36_set_volume_information_t                                                                                                                   
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m58 uint32_t               length;                                                                                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _m59 enum nt::fsinfoclass_t fs_information_class;                                                                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FsInformationClass
            _m60 void*                  volume_buffer;                                                                                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VolumeBuffer
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.SetVolumeInformation.$", 0x18, true, 0x61141679ce9777e8 );                                                         
            SDK_FIXED_SIZE( u36_set_volume_information_t, 0x18 );                                                                                             
        };                                                                                                                                                    
                                                                                                                                                              
        union u36_directory_control_t                                                                                                                         
        {                                                                                                                                                     
            struct u40_query_directory_t                                                                                                                      
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
                //                                                                                                                                            
                _m62 uint32_t                          length;                                                                                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m63 nt::unicode_view*                 file_name;                                                                                               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileName
                _m64 enum nt::file_information_class_t file_information_class;                                                                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileInformationClass
                _m65 uint32_t                          file_index;                                                                                              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FileIndex
                _m66 void*                             directory_buffer;                                                                                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DirectoryBuffer
                _m67 struct nt::mdl_t*                 mdl_address;                                                                                             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MdlAddress
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.DirectoryControl.QueryDirectory.$", 0x30, true, 0xbfc0a7ce17e20cdd );                                                                               
                SDK_FIXED_SIZE( u40_query_directory_t, 0x30 );                                                                                                
            };                                                                                                                                                
                                                                                                                                                              
            struct u44_notify_directory_t                                                                                                                     
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _m69 uint32_t          length;                                                                                                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m70 uint32_t          completion_filter;                                                                                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletionFilter
                _m71 void*             directory_buffer;                                                                                                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DirectoryBuffer
                _m72 struct nt::mdl_t* mdl_address;                                                                                                             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MdlAddress
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.DirectoryControl.NotifyDirectory.$", 0x30, true, 0x3b1870de0f3ffa4f );                                                                          
                SDK_FIXED_SIZE( u44_notify_directory_t, 0x30 );                                                                                               
            };                                                                                                                                                
                                                                                                                                                              
            struct u48_notify_directory_ex_t                                                                                                                  
            {                                                                                                                                                 
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                             
                //                                                                                                                                            
                _m74 uint32_t                                      length;                                                                                      //{ +0x0000    +0x0000    +0x0000    } | .Length
                _m75 uint32_t                                      completion_filter;                                                                           //{ +0x0008    +0x0008    +0x0008    } | .CompletionFilter
                _m76 enum nt::directory_notify_information_class_t directory_notify_information_class;                                                          //{ +0x0010    +0x0010    +0x0010    } | .DirectoryNotifyInformationClass
                _m77 void*                                         directory_buffer;                                                                            //{ +0x0020    +0x0020    +0x0020    } | .DirectoryBuffer
                _m78 struct nt::mdl_t*                             mdl_address;                                                                                 //{ +0x0028    +0x0028    +0x0028    } | .MdlAddress
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.DirectoryControl.NotifyDirectoryEx.$", 0x30, true, 0x3bc571874f949ebf );                                                                                           
                SDK_FIXED_SIZE( u48_notify_directory_ex_t, 0x30 );                                                                                            
            };                                                                                                                                                
                                                                                                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m68 u40_query_directory_t                                                                query_directory;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryDirectory
            _m73 u44_notify_directory_t                                                               notify_directory;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NotifyDirectory
                                                                                                                                                              
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                                 
            //                                                                                                                                                
            _m79 u48_notify_directory_ex_t                                                            notify_directory_ex;                                      //{ +0x0000    +0x0000    +0x0000    } | .NotifyDirectoryEx
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.DirectoryControl.$", 0x30, true, 0xa1b6fca9fc6cadeb );                                                        
            SDK_FIXED_SIZE( u36_directory_control_t, 0x30 );                                                                                                  
        };                                                                                                                                                    
                                                                                                                                                              
        union u51_file_system_control_t                                                                                                                       
        {                                                                                                                                                     
            struct u55_verify_volume_t                                                                                                                        
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _m81 struct nt::vpb_t*           vpb;                                                                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Vpb
                _m82 struct nt::device_object_t* device_object;                                                                                                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObject
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.FileSystemControl.VerifyVolume.$", 0x10, true, 0xbf495ea7c7d15958 );                                                                
                SDK_FIXED_SIZE( u55_verify_volume_t, 0x10 );                                                                                                  
            };                                                                                                                                                
                                                                                                                                                              
            struct u59_common_t                                                                                                                               
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _m84 uint32_t output_buffer_length;                                                                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputBufferLength
                _m85 uint32_t input_buffer_length;                                                                                                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InputBufferLength
                _m86 uint32_t fs_control_code;                                                                                                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FsControlCode
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.FileSystemControl.Common.$", 0x18, true, 0xf95ffee10596a767 );                                                                       
                SDK_FIXED_SIZE( u59_common_t, 0x18 );                                                                                                         
            };                                                                                                                                                
                                                                                                                                                              
            struct u63_neither_t                                                                                                                              
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _m88 uint32_t          output_buffer_length;                                                                                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputBufferLength
                _m89 uint32_t          input_buffer_length;                                                                                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InputBufferLength
                _m90 uint32_t          fs_control_code;                                                                                                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FsControlCode
                _m91 void*             input_buffer;                                                                                                            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InputBuffer
                _m92 void*             output_buffer;                                                                                                           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OutputBuffer
                _m93 struct nt::mdl_t* output_mdl_address;                                                                                                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OutputMdlAddress
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.FileSystemControl.Neither.$", 0x30, true, 0x5cf211952ec3546 );                                                                       
                SDK_FIXED_SIZE( u63_neither_t, 0x30 );                                                                                                        
            };                                                                                                                                                
                                                                                                                                                              
            struct u67_buffered_t                                                                                                                             
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _m95 uint32_t output_buffer_length;                                                                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputBufferLength
                _m96 uint32_t input_buffer_length;                                                                                                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InputBufferLength
                _m97 uint32_t fs_control_code;                                                                                                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FsControlCode
                _m98 void*    system_buffer;                                                                                                                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SystemBuffer
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.FileSystemControl.Buffered.$", 0x20, true, 0xaca1ffea1dba7987 );                                                                       
                SDK_FIXED_SIZE( u67_buffered_t, 0x20 );                                                                                                       
            };                                                                                                                                                
                                                                                                                                                              
            struct u71_direct_t                                                                                                                               
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _n00 uint32_t          output_buffer_length;                                                                                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputBufferLength
                _n01 uint32_t          input_buffer_length;                                                                                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InputBufferLength
                _n02 uint32_t          fs_control_code;                                                                                                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FsControlCode
                _n03 void*             input_system_buffer;                                                                                                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InputSystemBuffer
                _n04 void*             output_buffer;                                                                                                           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OutputBuffer
                _n05 struct nt::mdl_t* output_mdl_address;                                                                                                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OutputMdlAddress
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.FileSystemControl.Direct.$", 0x30, true, 0xf071e899177c01ea );                                                                       
                SDK_FIXED_SIZE( u71_direct_t, 0x30 );                                                                                                         
            };                                                                                                                                                
                                                                                                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _m83 u55_verify_volume_t                           verify_volume;                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VerifyVolume
            _m87 u59_common_t                                  common;                                                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Common
            _m94 u63_neither_t                                 neither;                                                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Neither
            _m99 u67_buffered_t                                buffered;                                                                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffered
            _n06 u71_direct_t                                  direct;                                                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Direct
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.FileSystemControl.$", 0x30, true, 0xfb7cafa286339654 );                                                    
            SDK_FIXED_SIZE( u51_file_system_control_t, 0x30 );                                                                                                
        };                                                                                                                                                    
                                                                                                                                                              
        union u75_device_io_control_t                                                                                                                         
        {                                                                                                                                                     
            struct u79_common_t                                                                                                                               
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _n08 uint32_t output_buffer_length;                                                                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputBufferLength
                _n09 uint32_t input_buffer_length;                                                                                                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InputBufferLength
                _n10 uint32_t io_control_code;                                                                                                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IoControlCode
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.DeviceIoControl.Common.$", 0x18, true, 0xae7650b159fb333b );                                                                  
                SDK_FIXED_SIZE( u79_common_t, 0x18 );                                                                                                         
            };                                                                                                                                                
                                                                                                                                                              
            struct u83_neither_t                                                                                                                              
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _n12 uint32_t          output_buffer_length;                                                                                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputBufferLength
                _n13 uint32_t          input_buffer_length;                                                                                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InputBufferLength
                _n14 uint32_t          io_control_code;                                                                                                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IoControlCode
                _n15 void*             input_buffer;                                                                                                            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InputBuffer
                _n16 void*             output_buffer;                                                                                                           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OutputBuffer
                _n17 struct nt::mdl_t* output_mdl_address;                                                                                                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OutputMdlAddress
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.DeviceIoControl.Neither.$", 0x30, true, 0x261bebd3a946d6f );                                                                  
                SDK_FIXED_SIZE( u83_neither_t, 0x30 );                                                                                                        
            };                                                                                                                                                
                                                                                                                                                              
            struct u87_buffered_t                                                                                                                             
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _n19 uint32_t output_buffer_length;                                                                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputBufferLength
                _n20 uint32_t input_buffer_length;                                                                                                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InputBufferLength
                _n21 uint32_t io_control_code;                                                                                                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IoControlCode
                _n22 void*    system_buffer;                                                                                                                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SystemBuffer
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.DeviceIoControl.Buffered.$", 0x20, true, 0x1dd0f2b66113216d );                                                                  
                SDK_FIXED_SIZE( u87_buffered_t, 0x20 );                                                                                                       
            };                                                                                                                                                
                                                                                                                                                              
            struct u91_direct_t                                                                                                                               
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _n24 uint32_t          output_buffer_length;                                                                                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputBufferLength
                _n25 uint32_t          input_buffer_length;                                                                                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InputBufferLength
                _n26 uint32_t          io_control_code;                                                                                                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IoControlCode
                _n27 void*             input_system_buffer;                                                                                                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InputSystemBuffer
                _n28 void*             output_buffer;                                                                                                           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OutputBuffer
                _n29 struct nt::mdl_t* output_mdl_address;                                                                                                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OutputMdlAddress
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.DeviceIoControl.Direct.$", 0x30, true, 0x8481db78d34e0cc4 );                                                                  
                SDK_FIXED_SIZE( u91_direct_t, 0x30 );                                                                                                         
            };                                                                                                                                                
                                                                                                                                                              
            struct u95_fast_io_t                                                                                                                              
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _n31 uint32_t output_buffer_length;                                                                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputBufferLength
                _n32 uint32_t input_buffer_length;                                                                                                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InputBufferLength
                _n33 uint32_t io_control_code;                                                                                                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IoControlCode
                _n34 void*    input_buffer;                                                                                                                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InputBuffer
                _n35 void*    output_buffer;                                                                                                                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OutputBuffer
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.DeviceIoControl.FastIo.$", 0x28, true, 0xc17484989a357b87 );                                                                  
                SDK_FIXED_SIZE( u95_fast_io_t, 0x28 );                                                                                                        
            };                                                                                                                                                
                                                                                                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _n11 u79_common_t                               common;                                                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Common
            _n18 u83_neither_t                              neither;                                                                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Neither
            _n23 u87_buffered_t                             buffered;                                                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffered
            _n30 u91_direct_t                               direct;                                                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Direct
            _n36 u95_fast_io_t                              fast_io;                                                                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FastIo
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.DeviceIoControl.$", 0x30, true, 0xd0025eb5fa627bd7 );                                                      
            SDK_FIXED_SIZE( u75_device_io_control_t, 0x30 );                                                                                                  
        };                                                                                                                                                    
                                                                                                                                                              
        struct u99_lock_control_t                                                                                                                             
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _n38 int64_t*               length;                                                                                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _n39 uint32_t               key;                                                                                                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
            _n40 int64_t                byte_offset;                                                                                                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ByteOffset
            _n41 struct nt::kprocess_t* process_id;                                                                                                             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProcessId
            _n42 uint8_t                fail_immediately;                                                                                                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FailImmediately
            _n43 uint8_t                exclusive_lock;                                                                                                         //{ +0x0021    +0x0021    +0x0021    +0x0021    } | .ExclusiveLock
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.LockControl.$", 0x28, true, 0x19dd10a7453c5a6 );                                                           
            SDK_FIXED_SIZE( u99_lock_control_t, 0x28 );                                                                                                       
        };                                                                                                                                                    
                                                                                                                                                              
        struct u103_query_security_t                                                                                                                          
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _n45 uint32_t          security_information;                                                                                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityInformation
            _n46 uint32_t          length;                                                                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
            _n47 void*             security_buffer;                                                                                                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SecurityBuffer
            _n48 struct nt::mdl_t* mdl_address;                                                                                                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MdlAddress
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.QuerySecurity.$", 0x20, true, 0x38ac5a74ad4822ad );                                                         
            SDK_FIXED_SIZE( u103_query_security_t, 0x20 );                                                                                                    
        };                                                                                                                                                    
                                                                                                                                                              
        struct u107_set_security_t                                                                                                                            
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _n50 uint32_t security_information;                                                                                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityInformation
            _n51 void*    security_descriptor;                                                                                                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SecurityDescriptor
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.SetSecurity.$", 0x10, true, 0x1bf4749d620945a7 );                                                          
            SDK_FIXED_SIZE( u107_set_security_t, 0x10 );                                                                                                      
        };                                                                                                                                                    
                                                                                                                                                              
        struct u111_wmi_t                                                                                                                                     
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _n53 uint64_t provider_id;                                                                                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProviderId
            _n54 void*    data_path;                                                                                                                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataPath
            _n55 uint32_t buffer_size;                                                                                                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BufferSize
            _n56 void*    buffer;                                                                                                                               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Buffer
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.WMI.$", 0x20, true, 0x906539f2a3b86e6b );                                                                  
            SDK_FIXED_SIZE( u111_wmi_t, 0x20 );                                                                                                               
        };                                                                                                                                                    
                                                                                                                                                              
        struct u115_query_quota_t                                                                                                                             
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _n58 uint32_t                                 length;                                                                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _n59 void*                                    start_sid;                                                                                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StartSid
            _n60 struct nt::file_get_quota_information_t* sid_list;                                                                                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SidList
            _n61 uint32_t                                 sid_list_length;                                                                                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SidListLength
            _n62 void*                                    quota_buffer;                                                                                         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .QuotaBuffer
            _n63 struct nt::mdl_t*                        mdl_address;                                                                                          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MdlAddress
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.QueryQuota.$", 0x30, true, 0x80c311a46cb997a5 );                                                           
            SDK_FIXED_SIZE( u115_query_quota_t, 0x30 );                                                                                                       
        };                                                                                                                                                    
                                                                                                                                                              
        struct u119_set_quota_t                                                                                                                               
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _n65 uint32_t          length;                                                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
            _n66 void*             quota_buffer;                                                                                                                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .QuotaBuffer
            _n67 struct nt::mdl_t* mdl_address;                                                                                                                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MdlAddress
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.SetQuota.$", 0x18, true, 0x3112048deac1e6d6 );                                                             
            SDK_FIXED_SIZE( u119_set_quota_t, 0x18 );                                                                                                         
        };                                                                                                                                                    
                                                                                                                                                              
        union u123_pnp_t                                                                                                                                      
        {                                                                                                                                                     
            struct u127_start_device_t                                                                                                                        
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                                
                //                                                                                                                                            
                _n69 struct cm::resource_list_t* allocated_resources;                                                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocatedResources
                _n70 struct cm::resource_list_t* allocated_resources_translated;                                                                                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocatedResourcesTranslated
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Pnp.StartDevice.$", 0x10, true, 0x37927c2d44e94e4b );                                                                                                
                SDK_FIXED_SIZE( u127_start_device_t, 0x10 );                                                                                                  
            };                                                                                                                                                
                                                                                                                                                              
            struct u131_query_device_relations_t                                                                                                              
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _n72 enum nt::device_relation_type_t type;                                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Pnp.QueryDeviceRelations.$", 0x4, true, 0xb33861b5c778fbef );                                                                      
                SDK_FIXED_SIZE( u131_query_device_relations_t, 0x4 );                                                                                         
            };                                                                                                                                                
                                                                                                                                                              
            struct u135_query_interface_t                                                                                                                     
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                         
                //                                                                                                                                            
                _n74 const struct nt::guid_t* interface_type;                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceType
                _n75 uint16_t                 size;                                                                                                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
                _n76 uint16_t                 version;                                                                                                          //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Version
                _n77 struct nt::interface_t*  interface;                                                                                                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Interface
                _n78 void*                    interface_specific_data;                                                                                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceSpecificData
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Pnp.QueryInterface.$", 0x20, true, 0xbac1bc5fb52044a3 );                                                                                         
                SDK_FIXED_SIZE( u135_query_interface_t, 0x20 );                                                                                               
            };                                                                                                                                                
                                                                                                                                                              
            struct u139_device_capabilities_t                                                                                                                 
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                              
                //                                                                                                                                            
                _n80 struct nt::device_capabilities_t* capabilities;                                                                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Capabilities
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Pnp.DeviceCapabilities.$", 0x8, true, 0x2570d8e59480e8fe );                                                                              
                SDK_FIXED_SIZE( u139_device_capabilities_t, 0x8 );                                                                                            
            };                                                                                                                                                
                                                                                                                                                              
            struct u143_filter_resource_requirements_t                                                                                                        
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                              
                //                                                                                                                                            
                _n82 struct io::resource_requirements_list_t* io_resource_requirement_list;                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IoResourceRequirementList
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Pnp.FilterResourceRequirements.$", 0x8, true, 0x21fdf26fae66487f );                                                                                              
                SDK_FIXED_SIZE( u143_filter_resource_requirements_t, 0x8 );                                                                                              
            };                                                                                                                                                
                                                                                                                                                              
            struct u147_read_write_config_t                                                                                                                   
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                             
                //                                                                                                                                            
                _n84 uint32_t which_space;                                                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WhichSpace
                _n85 void*    buffer;                                                                                                                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
                _n86 uint32_t offset;                                                                                                                           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Offset
                _n87 uint32_t length;                                                                                                                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Length
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Pnp.ReadWriteConfig.$", 0x20, true, 0x3dfd638de5873c3 );                                                                             
                SDK_FIXED_SIZE( u147_read_write_config_t, 0x20 );                                                                                             
            };                                                                                                                                                
                                                                                                                                                              
            struct u151_set_lock_t                                                                                                                            
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _n89 uint8_t lock;                                                                                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Pnp.SetLock.$", 0x1, true, 0x984dc878a8e522ea );                                                                      
                SDK_FIXED_SIZE( u151_set_lock_t, 0x1 );                                                                                                       
            };                                                                                                                                                
                                                                                                                                                              
            struct u155_query_id_t                                                                                                                            
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _n91 enum nt::bus_query_id_type_t id_type;                                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IdType
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Pnp.QueryId.$", 0x4, true, 0x32732222ba4dd517 );                                                                         
                SDK_FIXED_SIZE( u155_query_id_t, 0x4 );                                                                                                       
            };                                                                                                                                                
                                                                                                                                                              
            struct u159_query_device_text_t                                                                                                                   
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                  
                //                                                                                                                                            
                _n93 enum nt::device_text_type_t device_text_type;                                                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceTextType
                _n94 uint32_t                    locale_id;                                                                                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LocaleId
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Pnp.QueryDeviceText.$", 0x10, true, 0xb5635b1daa729725 );                                                                                  
                SDK_FIXED_SIZE( u159_query_device_text_t, 0x10 );                                                                                             
            };                                                                                                                                                
                                                                                                                                                              
            struct u163_usage_notification_t                                                                                                                  
            {                                                                                                                                                 
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                            
                _n96 uint8_t                                   in_path;                                                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InPath
                _n97 enum nt::device_usage_notification_type_t type;                                                                                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
                                                                                                                                                              
                SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Pnp.UsageNotification.$", 0x10, true, 0x858d1b706362504a );                                                                         
                SDK_FIXED_SIZE( u163_usage_notification_t, 0x10 );                                                                                            
            };                                                                                                                                                
                                                                                                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _n71 u127_start_device_t                                                       start_device;                                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartDevice
            _n73 u131_query_device_relations_t                                             query_device_relations;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryDeviceRelations
            _n79 u135_query_interface_t                                                    query_interface;                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
            _n81 u139_device_capabilities_t                                                device_capabilities;                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceCapabilities
            _n83 u143_filter_resource_requirements_t                                       filter_resource_requirements;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FilterResourceRequirements
            _n88 u147_read_write_config_t                                                  read_write_config;                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReadWriteConfig
            _n90 u151_set_lock_t                                                           set_lock;                                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SetLock
            _n92 u155_query_id_t                                                           query_id;                                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryId
            _n95 u159_query_device_text_t                                                  query_device_text;                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryDeviceText
            _n98 u163_usage_notification_t                                                 usage_notification;                                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UsageNotification
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Pnp.$", 0x20, true, 0x2ee762201a98c36a );                                                                  
            SDK_FIXED_SIZE( u123_pnp_t, 0x20 );                                                                                                               
        };                                                                                                                                                    
                                                                                                                                                              
        struct u167_acquire_for_section_synchronization_t                                                                                                     
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _o00 enum fs::filter_section_sync_type_t      sync_type;                                                                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SyncType
            _o01 uint32_t                                 page_protection;                                                                                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PageProtection
            _o02 struct fs::filter_section_sync_output_t* output_information;                                                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OutputInformation
                                                                                                                                                              
            // Windows 11                                                                                                                                     
            //                                                                                                                                                
            _o03 uint32_t                                 flags;                                                                                                //{ +0x0010    } | .Flags
            _o04 uint32_t                                 allocation_attributes;                                                                                //{ +0x0014    } | .AllocationAttributes
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.AcquireForSectionSynchronization.$", 0x10, true, 0xf509ea20b5e792ec );                                                          
            SDK_DYNAMIC_SIZE( u167_acquire_for_section_synchronization_t );                                                                                   
        };                                                                                                                                                    
                                                                                                                                                              
        struct u171_acquire_for_modified_page_writer_t                                                                                                        
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _o06 int64_t*                 ending_offset;                                                                                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EndingOffset
            _o07 struct nt::eresource_t** resource_to_release;                                                                                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResourceToRelease
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.AcquireForModifiedPageWriter.$", 0x10, true, 0x3505ae7390ad28d1 );                                                        
            SDK_FIXED_SIZE( u171_acquire_for_modified_page_writer_t, 0x10 );                                                                                  
        };                                                                                                                                                    
                                                                                                                                                              
        struct u175_release_for_modified_page_writer_t                                                                                                        
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _o09 struct nt::eresource_t* resource_to_release;                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ResourceToRelease
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.ReleaseForModifiedPageWriter.$", 0x8, true, 0x504ae63c5d7e3ddd );                                                        
            SDK_FIXED_SIZE( u175_release_for_modified_page_writer_t, 0x8 );                                                                                   
        };                                                                                                                                                    
                                                                                                                                                              
        struct u179_fast_io_check_if_possible_t                                                                                                               
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _o11 int64_t  file_offset;                                                                                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
            _o12 uint32_t length;                                                                                                                               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
            _o13 uint32_t lock_key;                                                                                                                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LockKey
            _o14 uint8_t  check_for_read_operation;                                                                                                             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CheckForReadOperation
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.FastIoCheckIfPossible.$", 0x20, true, 0x90f22d30a38defaf );                                                             
            SDK_FIXED_SIZE( u179_fast_io_check_if_possible_t, 0x20 );                                                                                         
        };                                                                                                                                                    
                                                                                                                                                              
        struct u183_network_query_open_t                                                                                                                      
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _o16 struct nt::irp_t*                           irp;                                                                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
            _o17 struct nt::file_network_open_information_t* network_information;                                                                               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NetworkInformation
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.NetworkQueryOpen.$", 0x10, true, 0x80c394abd785112e );                                                        
            SDK_FIXED_SIZE( u183_network_query_open_t, 0x10 );                                                                                                
        };                                                                                                                                                    
                                                                                                                                                              
        struct u187_mdl_read_t                                                                                                                                
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _o19 int64_t            file_offset;                                                                                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
            _o20 uint32_t           length;                                                                                                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
            _o21 uint32_t           key;                                                                                                                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Key
            _o22 struct nt::mdl_t** mdl_chain;                                                                                                                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MdlChain
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.MdlRead.$", 0x20, true, 0xdb9197a7e5042b68 );                                                              
            SDK_FIXED_SIZE( u187_mdl_read_t, 0x20 );                                                                                                          
        };                                                                                                                                                    
                                                                                                                                                              
        struct u191_mdl_read_complete_t                                                                                                                       
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _o24 struct nt::mdl_t* mdl_chain;                                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MdlChain
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.MdlReadComplete.$", 0x8, true, 0x1a92552e0e33ffab );                                                       
            SDK_FIXED_SIZE( u191_mdl_read_complete_t, 0x8 );                                                                                                  
        };                                                                                                                                                    
                                                                                                                                                              
        struct u195_prepare_mdl_write_t                                                                                                                       
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _o26 int64_t            file_offset;                                                                                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
            _o27 uint32_t           length;                                                                                                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
            _o28 uint32_t           key;                                                                                                                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Key
            _o29 struct nt::mdl_t** mdl_chain;                                                                                                                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MdlChain
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.PrepareMdlWrite.$", 0x20, true, 0xa3a1de2acb42ffd0 );                                                      
            SDK_FIXED_SIZE( u195_prepare_mdl_write_t, 0x20 );                                                                                                 
        };                                                                                                                                                    
                                                                                                                                                              
        struct u195_mdl_write_complete_t                                                                                                                      
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _o31 int64_t           file_offset;                                                                                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
            _o32 struct nt::mdl_t* mdl_chain;                                                                                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MdlChain
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.MdlWriteComplete.$", 0x10, true, 0x9c7a7beb4ebec61b );                                                     
            SDK_FIXED_SIZE( u195_mdl_write_complete_t, 0x10 );                                                                                                
        };                                                                                                                                                    
                                                                                                                                                              
        struct u199_mount_volume_t                                                                                                                            
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _o34 uint32_t device_type;                                                                                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceType
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.MountVolume.$", 0x4, true, 0xaf18391e1e314893 );                                                           
            SDK_FIXED_SIZE( u199_mount_volume_t, 0x4 );                                                                                                       
        };                                                                                                                                                    
                                                                                                                                                              
        struct u203_others_t                                                                                                                                  
        {                                                                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
            //                                                                                                                                                
            _o36 void*   argument1;                                                                                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Argument1
            _o37 void*   argument2;                                                                                                                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Argument2
            _o38 void*   argument3;                                                                                                                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Argument3
            _o39 void*   argument4;                                                                                                                             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Argument4
            _o40 void*   argument5;                                                                                                                             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Argument5
            _o41 int64_t argument6;                                                                                                                             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Argument6
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.Others.$", 0x30, true, 0x59fc9966d0779f58 );                                                               
            SDK_FIXED_SIZE( u203_others_t, 0x30 );                                                                                                            
        };                                                                                                                                                    
                                                                                                                                                              
        struct u207_query_open_t                                                                                                                              
        {                                                                                                                                                     
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                                 
            //                                                                                                                                                
            _o43 struct nt::irp_t*                 irp;                                                                                                         //{ +0x0000    +0x0000    +0x0000    } | .Irp
            _o44 void*                             file_information;                                                                                            //{ +0x0008    +0x0008    +0x0008    } | .FileInformation
            _o45 uint32_t*                         length;                                                                                                      //{ +0x0010    +0x0010    +0x0010    } | .Length
            _o46 enum nt::file_information_class_t file_information_class;                                                                                      //{ +0x0018    +0x0018    +0x0018    } | .FileInformationClass
                                                                                                                                                              
            SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.QueryOpen.$", 0x20, true, 0x310c2f97338d0daf );                                                            
            SDK_FIXED_SIZE( u207_query_open_t, 0x20 );                                                                                                        
        };                                                                                                                                                    
                                                                                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                   
        //                                                                                                                                                    
        _m007 u0_create_t                                                                                                 create;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Create
        _m012 u4_create_pipe_t                                                                                            create_pipe;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CreatePipe
        _m017 u4_create_pipe_t                                                                                            create_mailslot;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CreateMailslot
        _m023 u8_read_t                                                                                                   read;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Read
        _m029 u12_write_t                                                                                                 write;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
        _m033 u16_query_file_information_t                                                                                query_file_information;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryFileInformation
        _m042 u20_set_file_information_t                                                                                  set_file_information;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SetFileInformation
        _m049 u24_query_ea_t                                                                                              query_ea;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryEa
        _m053 u28_set_ea_t                                                                                                set_ea;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SetEa
        _m057 u32_query_volume_information_t                                                                              query_volume_information;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryVolumeInformation
        _m061 u32_query_volume_information_t                                                                              set_volume_information;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SetVolumeInformation
        _m080 u36_directory_control_t                                                                                     directory_control;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DirectoryControl
        _m107 u51_file_system_control_t                                                                                   file_system_control;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileSystemControl
        _m137 u75_device_io_control_t                                                                                     device_io_control;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceIoControl
        _m144 u99_lock_control_t                                                                                          lock_control;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LockControl
        _m149 u103_query_security_t                                                                                       query_security;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QuerySecurity
        _m152 u107_set_security_t                                                                                         set_security;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SetSecurity
        _m157 u111_wmi_t                                                                                                  wmi;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WMI
        _m164 u115_query_quota_t                                                                                          query_quota;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryQuota
        _m168 u119_set_quota_t                                                                                            set_quota;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SetQuota
        _m199 u123_pnp_t                                                                                                  pnp;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Pnp
        _m205 u167_acquire_for_section_synchronization_t                                                                  acquire_for_section_synchronization;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AcquireForSectionSynchronization
        _m208 u171_acquire_for_modified_page_writer_t                                                                     acquire_for_modified_page_writer;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AcquireForModifiedPageWriter
        _m210 u175_release_for_modified_page_writer_t                                                                     release_for_modified_page_writer;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReleaseForModifiedPageWriter
        _m215 u179_fast_io_check_if_possible_t                                                                            fast_io_check_if_possible;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FastIoCheckIfPossible
        _m218 u183_network_query_open_t                                                                                   network_query_open;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NetworkQueryOpen
        _m223 u187_mdl_read_t                                                                                             mdl_read;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MdlRead
        _m225 u191_mdl_read_complete_t                                                                                    mdl_read_complete;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MdlReadComplete
        _m230 u187_mdl_read_t                                                                                             prepare_mdl_write;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PrepareMdlWrite
        _m233 u195_mdl_write_complete_t                                                                                   mdl_write_complete;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MdlWriteComplete
        _m235 u199_mount_volume_t                                                                                         mount_volume;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MountVolume
        _m242 u203_others_t                                                                                               others;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Others
                                                                                                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                                     
        //                                                                                                                                                    
        _m247 u207_query_open_t                                                                                           query_open;                           //{ +0x0000    +0x0000    +0x0000    } | .QueryOpen
                                                                                                                                                              
        SDK_MAGIC_PROPERTIES( "_FLT_PARAMETERS.$", 0x30, true, 0xdbd84c9bef71a0c5 );                                                                          
        SDK_FIXED_SIZE( flt_parameters_t, 0x30 );                                                                                                             
    };                                                                                                                                                        
};
#include "magic/flt_parameters_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_parameters_t::u0_create_t, 0x30 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u4_create_pipe_t, 0x20 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u8_create_mailslot_t, 0x20 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u8_read_t, 0x28 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u12_write_t, 0x28 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u16_query_file_information_t, 0x18 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u20_set_file_information_t, 0x28 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u24_query_ea_t, 0x30 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u28_set_ea_t, 0x18 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u32_query_volume_information_t, 0x18 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u36_set_volume_information_t, 0x18 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u36_directory_control_t::u40_query_directory_t, 0x30 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u36_directory_control_t::u44_notify_directory_t, 0x30 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u36_directory_control_t::u48_notify_directory_ex_t, 0x30 );
SDK_VERIFY( union fltmgr::flt_parameters_t::u36_directory_control_t, 0x30 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u51_file_system_control_t::u55_verify_volume_t, 0x10 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u51_file_system_control_t::u59_common_t, 0x18 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u51_file_system_control_t::u63_neither_t, 0x30 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u51_file_system_control_t::u67_buffered_t, 0x20 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u51_file_system_control_t::u71_direct_t, 0x30 );
SDK_VERIFY( union fltmgr::flt_parameters_t::u51_file_system_control_t, 0x30 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u75_device_io_control_t::u79_common_t, 0x18 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u75_device_io_control_t::u83_neither_t, 0x30 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u75_device_io_control_t::u87_buffered_t, 0x20 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u75_device_io_control_t::u91_direct_t, 0x30 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u75_device_io_control_t::u95_fast_io_t, 0x28 );
SDK_VERIFY( union fltmgr::flt_parameters_t::u75_device_io_control_t, 0x30 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u99_lock_control_t, 0x28 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u103_query_security_t, 0x20 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u107_set_security_t, 0x10 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u111_wmi_t, 0x20 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u115_query_quota_t, 0x30 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u119_set_quota_t, 0x18 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u123_pnp_t::u127_start_device_t, 0x10 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u123_pnp_t::u131_query_device_relations_t, 0x4 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u123_pnp_t::u135_query_interface_t, 0x20 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u123_pnp_t::u139_device_capabilities_t, 0x8 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u123_pnp_t::u143_filter_resource_requirements_t, 0x8 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u123_pnp_t::u147_read_write_config_t, 0x20 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u123_pnp_t::u151_set_lock_t, 0x1 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u123_pnp_t::u155_query_id_t, 0x4 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u123_pnp_t::u159_query_device_text_t, 0x10 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u123_pnp_t::u163_usage_notification_t, 0x10 );
SDK_VERIFY( union fltmgr::flt_parameters_t::u123_pnp_t, 0x20 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u171_acquire_for_modified_page_writer_t, 0x10 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u175_release_for_modified_page_writer_t, 0x8 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u179_fast_io_check_if_possible_t, 0x20 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u183_network_query_open_t, 0x10 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u187_mdl_read_t, 0x20 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u191_mdl_read_complete_t, 0x8 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u195_prepare_mdl_write_t, 0x20 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u195_mdl_write_complete_t, 0x10 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u199_mount_volume_t, 0x4 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u203_others_t, 0x30 );
SDK_VERIFY( struct fltmgr::flt_parameters_t::u207_query_open_t, 0x20 );
SDK_VERIFY( union fltmgr::flt_parameters_t, 0x30 );
