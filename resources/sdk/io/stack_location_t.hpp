#pragma once
#include <sdkgen/support_library.hpp>
#include "../power/state_t.hpp"
#include "../power/action_t.hpp"
#include "../nt/fsinfoclass_t.hpp"
#include "../power/state_type_t.hpp"
#include "../nt/device_text_type_t.hpp"
#include "../nt/bus_query_id_type_t.hpp"
#include "../nt/system_power_state_t.hpp"
#include "../nt/device_relation_type_t.hpp"
#include "../nt/file_information_class_t.hpp"
#include "../nt/system_power_state_context_t.hpp"
#include "../nt/device_usage_notification_type_t.hpp"
#include "../nt/directory_notify_information_class_t.hpp"

namespace cm    { struct resource_list_t;                }
namespace nt    { struct device_capabilities_t;          }
namespace nt    { struct device_object_t;                }
namespace nt    { struct file_get_quota_information_t;   }
namespace nt    { struct file_object_t;                  }
namespace nt    { struct guid_t;                         }
namespace nt    { struct interface_t;                    }
namespace nt    { struct irp_t;                          }
namespace nt    { struct mailslot_create_parameters_t;   }
namespace nt    { struct named_pipe_create_parameters_t; }
namespace nt    { struct scsi_request_block_t;           }
namespace nt    { struct vpb_t;                          }
namespace power { struct sequence_t;                     }

#include "magic/stack_location_t.start.hpp"
namespace io
{
    struct security_context_t;
    struct resource_requirements_list_t;

    // [struct _IO_STACK_LOCATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct stack_location_t                                                                                                                           
    {                                                                                                                                                 
        union u0_parameters_t                                                                                                                         
        {                                                                                                                                             
            struct u5_create_t                                                                                                                        
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                 
                //                                                                                                                                    
                _m04 struct io::security_context_t* security_context;                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityContext
                _m05 uint32_t                       options;                                                                                            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Options
                _m06 uint16_t                       file_attributes;                                                                                    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileAttributes
                _m07 uint16_t                       share_access;                                                                                       //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .ShareAccess
                _m08 uint32_t                       ea_length;                                                                                          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .EaLength
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.Create.$", 0x20, true, 0x1bc86797314e0c82 );                                                                 
                SDK_FIXED_SIZE( u5_create_t, 0x20 );                                                                                                  
            };                                                                                                                                        
                                                                                                                                                      
            struct u10_create_pipe_t                                                                                                                  
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                 
                //                                                                                                                                    
                _m10 struct io::security_context_t*             security_context;                                                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityContext
                _m11 uint32_t                                   options;                                                                                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Options
                _m12 uint16_t                                   share_access;                                                                           //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .ShareAccess
                _m13 struct nt::named_pipe_create_parameters_t* parameters;                                                                             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Parameters
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.CreatePipe.$", 0x20, true, 0x3059e836fa932d43 );                                                                 
                SDK_FIXED_SIZE( u10_create_pipe_t, 0x20 );                                                                                            
            };                                                                                                                                        
                                                                                                                                                      
            struct u15_create_mailslot_t                                                                                                              
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                 
                //                                                                                                                                    
                _m15 struct io::security_context_t*           security_context;                                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityContext
                _m16 uint32_t                                 options;                                                                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Options
                _m17 uint16_t                                 share_access;                                                                             //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .ShareAccess
                _m18 struct nt::mailslot_create_parameters_t* parameters;                                                                               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Parameters
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.CreateMailslot.$", 0x20, true, 0xba8d6a7ca6c07b9 );                                                                 
                SDK_FIXED_SIZE( u15_create_mailslot_t, 0x20 );                                                                                        
            };                                                                                                                                        
                                                                                                                                                      
            struct u20_read_t                                                                                                                         
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                            
                //                                                                                                                                    
                _m20 uint32_t length;                                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m21 uint32_t key;                                                                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
                _m22 int64_t  byte_offset;                                                                                                              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ByteOffset
                                                                                                                                                      
                // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                             
                //                                                                                                                                    
                _m23 uint32_t flags;                                                                                                                    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.Read.$", 0x18, true, 0x6acda7197377f3b0 );                                                            
                SDK_FIXED_SIZE( u20_read_t, 0x18 );                                                                                                   
            };                                                                                                                                        
                                                                                                                                                      
            struct u25_write_t                                                                                                                        
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                            
                //                                                                                                                                    
                _m25 uint32_t length;                                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m26 uint32_t key;                                                                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
                _m27 int64_t  byte_offset;                                                                                                              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ByteOffset
                                                                                                                                                      
                // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                             
                //                                                                                                                                    
                _m28 uint32_t flags;                                                                                                                    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.Write.$", 0x18, true, 0xc4da1490ba63aee4 );                                                            
                SDK_FIXED_SIZE( u25_write_t, 0x18 );                                                                                                  
            };                                                                                                                                        
                                                                                                                                                      
            struct u26_query_directory_t                                                                                                              
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                       
                //                                                                                                                                    
                _m30 uint32_t                          length;                                                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m31 nt::unicode_view*                 file_name;                                                                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileName
                _m32 enum nt::file_information_class_t file_information_class;                                                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileInformationClass
                _m33 uint32_t                          file_index;                                                                                      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FileIndex
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.QueryDirectory.$", 0x20, true, 0x65799c4fa9288b06 );                                                                       
                SDK_FIXED_SIZE( u26_query_directory_t, 0x20 );                                                                                        
            };                                                                                                                                        
                                                                                                                                                      
            struct u31_notify_directory_t                                                                                                             
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                  
                //                                                                                                                                    
                _m35 uint32_t length;                                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m36 uint32_t completion_filter;                                                                                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletionFilter
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.NotifyDirectory.$", 0x10, true, 0x9b8e2289b0ba8ac6 );                                                                  
                SDK_FIXED_SIZE( u31_notify_directory_t, 0x10 );                                                                                       
            };                                                                                                                                        
                                                                                                                                                      
            struct u36_query_file_t                                                                                                                   
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                       
                //                                                                                                                                    
                _m38 uint32_t                          length;                                                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m39 enum nt::file_information_class_t file_information_class;                                                                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileInformationClass
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.QueryFile.$", 0x10, true, 0xe2f00caf8adc8893 );                                                                       
                SDK_FIXED_SIZE( u36_query_file_t, 0x10 );                                                                                             
            };                                                                                                                                        
                                                                                                                                                      
            struct u41_set_file_t                                                                                                                     
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                       
                //                                                                                                                                    
                _m41 uint32_t                          length;                                                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m42 enum nt::file_information_class_t file_information_class;                                                                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileInformationClass
                _m43 struct nt::file_object_t*         file_object;                                                                                     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileObject
                _m44 uint8_t                           replace_if_exists;                                                                               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ReplaceIfExists
                _m45 uint8_t                           advance_only;                                                                                    //{ +0x0019    +0x0019    +0x0019    +0x0019    +0x0019    } | .AdvanceOnly
                _m46 uint32_t                          cluster_count;                                                                                   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ClusterCount
                _m47 void*                             delete_handle;                                                                                   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DeleteHandle
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.SetFile.$", 0x20, true, 0x9eefc9ac95d3ad96 );                                                                       
                SDK_FIXED_SIZE( u41_set_file_t, 0x20 );                                                                                               
            };                                                                                                                                        
                                                                                                                                                      
            struct u46_query_ea_t                                                                                                                     
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                               
                //                                                                                                                                    
                _m49 uint32_t length;                                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m50 void*    ea_list;                                                                                                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EaList
                _m51 uint32_t ea_list_length;                                                                                                           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .EaListLength
                _m52 uint32_t ea_index;                                                                                                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .EaIndex
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.QueryEa.$", 0x20, true, 0x3ed138168805597a );                                                               
                SDK_FIXED_SIZE( u46_query_ea_t, 0x20 );                                                                                               
            };                                                                                                                                        
                                                                                                                                                      
            struct u51_set_ea_t                                                                                                                       
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
                //                                                                                                                                    
                _m54 uint32_t length;                                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.SetEa.$", 0x4, true, 0xb7b6e394d0354f59 );                                                       
                SDK_FIXED_SIZE( u51_set_ea_t, 0x4 );                                                                                                  
            };                                                                                                                                        
                                                                                                                                                      
            struct u56_query_volume_t                                                                                                                 
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
                //                                                                                                                                    
                _m56 uint32_t               length;                                                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m57 enum nt::fsinfoclass_t fs_information_class;                                                                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FsInformationClass
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.QueryVolume.$", 0x10, true, 0xf27f363fd5a26774 );                                                                     
                SDK_FIXED_SIZE( u56_query_volume_t, 0x10 );                                                                                           
            };                                                                                                                                        
                                                                                                                                                      
            struct u61_set_volume_t                                                                                                                   
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
                //                                                                                                                                    
                _m59 uint32_t               length;                                                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m60 enum nt::fsinfoclass_t fs_information_class;                                                                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FsInformationClass
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.SetVolume.$", 0x10, true, 0x3213052cb90d99e3 );                                                                     
                SDK_FIXED_SIZE( u61_set_volume_t, 0x10 );                                                                                             
            };                                                                                                                                        
                                                                                                                                                      
            struct u62_file_system_control_t                                                                                                          
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
                //                                                                                                                                    
                _m62 uint32_t output_buffer_length;                                                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputBufferLength
                _m63 uint32_t input_buffer_length;                                                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .InputBufferLength
                _m64 uint32_t fs_control_code;                                                                                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FsControlCode
                _m65 void*    type3_input_buffer;                                                                                                       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Type3InputBuffer
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.FileSystemControl.$", 0x20, true, 0x2cf05e1cc648d847 );                                                                     
                SDK_FIXED_SIZE( u62_file_system_control_t, 0x20 );                                                                                    
            };                                                                                                                                        
                                                                                                                                                      
            struct u67_lock_control_t                                                                                                                 
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                            
                //                                                                                                                                    
                _m67 int64_t* length;                                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m68 uint32_t key;                                                                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
                _m69 int64_t  byte_offset;                                                                                                              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ByteOffset
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.LockControl.$", 0x18, true, 0xb3774f9b1dde4d7c );                                                            
                SDK_FIXED_SIZE( u67_lock_control_t, 0x18 );                                                                                           
            };                                                                                                                                        
                                                                                                                                                      
            struct u72_device_io_control_t                                                                                                            
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
                //                                                                                                                                    
                _m71 uint32_t output_buffer_length;                                                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputBufferLength
                _m72 uint32_t input_buffer_length;                                                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .InputBufferLength
                _m73 uint32_t io_control_code;                                                                                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .IoControlCode
                _m74 void*    type3_input_buffer;                                                                                                       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Type3InputBuffer
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.DeviceIoControl.$", 0x20, true, 0x57d81254695fec3e );                                                                     
                SDK_FIXED_SIZE( u72_device_io_control_t, 0x20 );                                                                                      
            };                                                                                                                                        
                                                                                                                                                      
            struct u77_query_security_t                                                                                                               
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
                //                                                                                                                                    
                _m76 uint32_t security_information;                                                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityInformation
                _m77 uint32_t length;                                                                                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.QuerySecurity.$", 0x10, true, 0x2998acf70461ec0 );                                                                     
                SDK_FIXED_SIZE( u77_query_security_t, 0x10 );                                                                                         
            };                                                                                                                                        
                                                                                                                                                      
            struct u82_set_security_t                                                                                                                 
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
                //                                                                                                                                    
                _m79 uint32_t security_information;                                                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityInformation
                _m80 void*    security_descriptor;                                                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SecurityDescriptor
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.SetSecurity.$", 0x10, true, 0x2dc9cef07171dd80 );                                                                     
                SDK_FIXED_SIZE( u82_set_security_t, 0x10 );                                                                                           
            };                                                                                                                                        
                                                                                                                                                      
            struct u87_mount_volume_t                                                                                                                 
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                              
                //                                                                                                                                    
                _m82 struct nt::vpb_t*           vpb;                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Vpb
                _m83 struct nt::device_object_t* device_object;                                                                                         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObject
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.MountVolume.$", 0x10, true, 0x21cac49934bc3583 );                                                              
                SDK_FIXED_SIZE( u87_mount_volume_t, 0x10 );                                                                                           
            };                                                                                                                                        
                                                                                                                                                      
            struct u92_verify_volume_t                                                                                                                
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                              
                //                                                                                                                                    
                _m85 struct nt::vpb_t*           vpb;                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Vpb
                _m86 struct nt::device_object_t* device_object;                                                                                         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObject
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.VerifyVolume.$", 0x10, true, 0x100c1b4fb8532957 );                                                              
                SDK_FIXED_SIZE( u92_verify_volume_t, 0x10 );                                                                                          
            };                                                                                                                                        
                                                                                                                                                      
            struct u93_scsi_t                                                                                                                         
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
                //                                                                                                                                    
                _m88 struct nt::scsi_request_block_t* srb;                                                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Srb
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.Scsi.$", 0x8, true, 0xa51e18735dda4ac0 );                                                    
                SDK_FIXED_SIZE( u93_scsi_t, 0x8 );                                                                                                    
            };                                                                                                                                        
                                                                                                                                                      
            struct u98_query_quota_t                                                                                                                  
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
                //                                                                                                                                    
                _m90 uint32_t                                 length;                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m91 void*                                    start_sid;                                                                                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .StartSid
                _m92 struct nt::file_get_quota_information_t* sid_list;                                                                                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SidList
                _m93 uint32_t                                 sid_list_length;                                                                          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SidListLength
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.QueryQuota.$", 0x20, true, 0x4d4c8733a1f11c7f );                                                                
                SDK_FIXED_SIZE( u98_query_quota_t, 0x20 );                                                                                            
            };                                                                                                                                        
                                                                                                                                                      
            struct u103_set_quota_t                                                                                                                   
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
                //                                                                                                                                    
                _m95 uint32_t length;                                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.SetQuota.$", 0x4, true, 0xa7c9fcf64dd611da );                                                       
                SDK_FIXED_SIZE( u103_set_quota_t, 0x4 );                                                                                              
            };                                                                                                                                        
                                                                                                                                                      
            struct u104_query_device_relations_t                                                                                                      
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
                //                                                                                                                                    
                _m97 enum nt::device_relation_type_t type;                                                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.QueryDeviceRelations.$", 0x4, true, 0x5b8b63f2045151da );                                                     
                SDK_FIXED_SIZE( u104_query_device_relations_t, 0x4 );                                                                                 
            };                                                                                                                                        
                                                                                                                                                      
            struct u109_query_interface_t                                                                                                             
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                        
                //                                                                                                                                    
                _m99 const struct nt::guid_t* interface_type;                                                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceType
                _n00 uint16_t                 size;                                                                                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
                _n01 uint16_t                 version;                                                                                                  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .Version
                _n02 struct nt::interface_t*  interface;                                                                                                //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Interface
                _n03 void*                    interface_specific_data;                                                                                  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceSpecificData
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.QueryInterface.$", 0x20, true, 0x7b128d762baf7784 );                                                                        
                SDK_FIXED_SIZE( u109_query_interface_t, 0x20 );                                                                                       
            };                                                                                                                                        
                                                                                                                                                      
            struct u114_device_capabilities_t                                                                                                         
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                             
                //                                                                                                                                    
                _n05 struct nt::device_capabilities_t* capabilities;                                                                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Capabilities
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.DeviceCapabilities.$", 0x8, true, 0x28441814f74ac5e3 );                                                             
                SDK_FIXED_SIZE( u114_device_capabilities_t, 0x8 );                                                                                    
            };                                                                                                                                        
                                                                                                                                                      
            struct u119_filter_resource_requirements_t                                                                                                
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                             
                //                                                                                                                                    
                _n07 struct io::resource_requirements_list_t* io_resource_requirement_list;                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IoResourceRequirementList
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.FilterResourceRequirements.$", 0x8, true, 0x49a5d3b064feb011 );                                                                             
                SDK_FIXED_SIZE( u119_filter_resource_requirements_t, 0x8 );                                                                             
            };                                                                                                                                        
                                                                                                                                                      
            struct u124_read_write_config_t                                                                                                           
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                            
                //                                                                                                                                    
                _n09 uint32_t which_space;                                                                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .WhichSpace
                _n10 void*    buffer;                                                                                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
                _n11 uint32_t offset;                                                                                                                   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Offset
                _n12 uint32_t length;                                                                                                                   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Length
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.ReadWriteConfig.$", 0x20, true, 0xf6d260270cc153c5 );                                                            
                SDK_FIXED_SIZE( u124_read_write_config_t, 0x20 );                                                                                     
            };                                                                                                                                        
                                                                                                                                                      
            struct u129_set_lock_t                                                                                                                    
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
                //                                                                                                                                    
                _n14 uint8_t lock;                                                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.SetLock.$", 0x1, true, 0xda6d1e2e6df17da3 );                                                     
                SDK_FIXED_SIZE( u129_set_lock_t, 0x1 );                                                                                               
            };                                                                                                                                        
                                                                                                                                                      
            struct u134_query_id_t                                                                                                                    
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
                //                                                                                                                                    
                _n16 enum nt::bus_query_id_type_t id_type;                                                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IdType
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.QueryId.$", 0x4, true, 0x8abe16bc175ded86 );                                                        
                SDK_FIXED_SIZE( u134_query_id_t, 0x4 );                                                                                               
            };                                                                                                                                        
                                                                                                                                                      
            struct u139_query_device_text_t                                                                                                           
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                 
                //                                                                                                                                    
                _n18 enum nt::device_text_type_t device_text_type;                                                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceTextType
                _n19 uint32_t                    locale_id;                                                                                             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LocaleId
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.QueryDeviceText.$", 0x10, true, 0xcde70c8bba85552 );                                                                 
                SDK_FIXED_SIZE( u139_query_device_text_t, 0x10 );                                                                                     
            };                                                                                                                                        
                                                                                                                                                      
            struct u144_usage_notification_t                                                                                                          
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
                //                                                                                                                                    
                _n21 uint8_t                                   in_path;                                                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InPath
                _n22 enum nt::device_usage_notification_type_t type;                                                                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.UsageNotification.$", 0x10, true, 0x34c38bd4a2af0ef7 );                                                        
                SDK_FIXED_SIZE( u144_usage_notification_t, 0x10 );                                                                                    
            };                                                                                                                                        
                                                                                                                                                      
            struct u149_wait_wake_t                                                                                                                   
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                            
                //                                                                                                                                    
                _n24 enum nt::system_power_state_t power_state;                                                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PowerState
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.WaitWake.$", 0x4, true, 0x1749ac2ba51d4827 );                                                            
                SDK_FIXED_SIZE( u149_wait_wake_t, 0x4 );                                                                                              
            };                                                                                                                                        
                                                                                                                                                      
            struct u154_power_sequence_t                                                                                                              
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                               
                //                                                                                                                                    
                _n26 struct power::sequence_t* power_sequence;                                                                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PowerSequence
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.PowerSequence.$", 0x8, true, 0x23576f00dd370ef4 );                                                               
                SDK_FIXED_SIZE( u154_power_sequence_t, 0x8 );                                                                                         
            };                                                                                                                                        
                                                                                                                                                      
            struct u159_power_t                                                                                                                       
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
                //                                                                                                                                    
                _n28 uint32_t                                system_context;                                                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemContext
                _n29 struct nt::system_power_state_context_t system_power_state_context;                                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemPowerStateContext
                _n30 enum power::state_type_t                type;                                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
                _n31 union power::state_t                    state;                                                                                     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .State
                _n32 enum power::action_t                    shutdown_type;                                                                             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ShutdownType
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.Power.$", 0x20, true, 0x58a0fd31cd05a46c );                                                                           
                SDK_FIXED_SIZE( u159_power_t, 0x20 );                                                                                                 
            };                                                                                                                                        
                                                                                                                                                      
            struct u164_start_device_t                                                                                                                
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
                //                                                                                                                                    
                _n34 struct cm::resource_list_t* allocated_resources;                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocatedResources
                _n35 struct cm::resource_list_t* allocated_resources_translated;                                                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocatedResourcesTranslated
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.StartDevice.$", 0x10, true, 0x97973046e5a2a7ac );                                                                               
                SDK_FIXED_SIZE( u164_start_device_t, 0x10 );                                                                                          
            };                                                                                                                                        
                                                                                                                                                      
            struct u169_wmi_t                                                                                                                         
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                            
                //                                                                                                                                    
                _n37 uint64_t provider_id;                                                                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ProviderId
                _n38 void*    data_path;                                                                                                                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DataPath
                _n39 uint32_t buffer_size;                                                                                                              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .BufferSize
                _n40 void*    buffer;                                                                                                                   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Buffer
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.WMI.$", 0x20, true, 0x49b4296a81fed263 );                                                            
                SDK_FIXED_SIZE( u169_wmi_t, 0x20 );                                                                                                   
            };                                                                                                                                        
                                                                                                                                                      
            struct u174_others_t                                                                                                                      
            {                                                                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
                //                                                                                                                                    
                _n42 void* argument1;                                                                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Argument1
                _n43 void* argument2;                                                                                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Argument2
                _n44 void* argument3;                                                                                                                   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Argument3
                _n45 void* argument4;                                                                                                                   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Argument4
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.Others.$", 0x20, true, 0xbcbb0a23c1c4f7be );                                                          
                SDK_FIXED_SIZE( u174_others_t, 0x20 );                                                                                                
            };                                                                                                                                        
                                                                                                                                                      
            struct u179_notify_directory_ex_t                                                                                                         
            {                                                                                                                                         
                // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                   
                //                                                                                                                                    
                _n47 uint32_t                                      length;                                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _n48 uint32_t                                      completion_filter;                                                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletionFilter
                _n49 enum nt::directory_notify_information_class_t directory_notify_information_class;                                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DirectoryNotifyInformationClass
                                                                                                                                                      
                SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.NotifyDirectoryEx.$", 0x18, true, 0x58853d9d3d948aff );                                                                                   
                SDK_FIXED_SIZE( u179_notify_directory_ex_t, 0x18 );                                                                                   
            };                                                                                                                                        
                                                                                                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                               
            //                                                                                                                                        
            _m009 u5_create_t                                                                         create;                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Create
            _m014 u10_create_pipe_t                                                                   create_pipe;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CreatePipe
            _m019 u15_create_mailslot_t                                                               create_mailslot;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CreateMailslot
            _m024 u20_read_t                                                                          read;                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Read
            _m029 u25_write_t                                                                         write;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
            _m034 u26_query_directory_t                                                               query_directory;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryDirectory
            _m037 u31_notify_directory_t                                                              notify_directory;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NotifyDirectory
            _m040 u36_query_file_t                                                                    query_file;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryFile
            _m048 u41_set_file_t                                                                      set_file;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SetFile
            _m053 u46_query_ea_t                                                                      query_ea;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryEa
            _m055 u51_set_ea_t                                                                        set_ea;                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SetEa
            _m058 u56_query_volume_t                                                                  query_volume;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryVolume
            _m061 u61_set_volume_t                                                                    set_volume;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SetVolume
            _m066 u62_file_system_control_t                                                           file_system_control;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileSystemControl
            _m070 u67_lock_control_t                                                                  lock_control;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LockControl
            _m075 u72_device_io_control_t                                                             device_io_control;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceIoControl
            _m078 u77_query_security_t                                                                query_security;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QuerySecurity
            _m081 u82_set_security_t                                                                  set_security;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SetSecurity
            _m084 u87_mount_volume_t                                                                  mount_volume;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MountVolume
            _m087 u92_verify_volume_t                                                                 verify_volume;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VerifyVolume
            _m089 u93_scsi_t                                                                          scsi;                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Scsi
            _m094 u98_query_quota_t                                                                   query_quota;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryQuota
            _m096 u103_set_quota_t                                                                    set_quota;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SetQuota
            _m098 u104_query_device_relations_t                                                       query_device_relations;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryDeviceRelations
            _m104 u109_query_interface_t                                                              query_interface;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
            _m106 u114_device_capabilities_t                                                          device_capabilities;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceCapabilities
            _m108 u119_filter_resource_requirements_t                                                 filter_resource_requirements;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FilterResourceRequirements
            _m113 u124_read_write_config_t                                                            read_write_config;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ReadWriteConfig
            _m115 u129_set_lock_t                                                                     set_lock;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SetLock
            _m117 u134_query_id_t                                                                     query_id;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryId
            _m120 u139_query_device_text_t                                                            query_device_text;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryDeviceText
            _m123 u144_usage_notification_t                                                           usage_notification;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UsageNotification
            _m125 u149_wait_wake_t                                                                    wait_wake;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .WaitWake
            _m127 u154_power_sequence_t                                                               power_sequence;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PowerSequence
            _m133 u159_power_t                                                                        power;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Power
            _m136 u164_start_device_t                                                                 start_device;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StartDevice
            _m141 u169_wmi_t                                                                          wmi;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .WMI
            _m146 u174_others_t                                                                       others;                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Others
                                                                                                                                                      
            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                 
            //                                                                                                                                        
            _m150 u179_notify_directory_ex_t                                                          notify_directory_ex;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NotifyDirectoryEx
                                                                                                                                                      
            SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.Parameters.$", 0x20, true, 0x45973b8ecf4eeedc );                                                
            SDK_FIXED_SIZE( u0_parameters_t, 0x20 );                                                                                                  
        };                                                                                                                                            
                                                                                                                                                      
        using pio_completion_routine_t = sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, void*)>*;                              
                                                                                                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                   
        //                                                                                                                                            
        _m00 uint8_t                                                                                                               major_function;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorFunction
        _m01 uint8_t                                                                                                               minor_function;      //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .MinorFunction
        _m02 uint8_t                                                                                                               flags;               //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m03 uint8_t                                                                                                               control;             //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .Control
        _n51 u0_parameters_t                                                                                                       parameters;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Parameters
        _n52 struct nt::device_object_t*                                                                                           device_object;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .DeviceObject
        _n53 struct nt::file_object_t*                                                                                             file_object;         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .FileObject
        _n54 pio_completion_routine_t                                                                                              completion_routine;  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .CompletionRoutine
        _n55 void*                                                                                                                 context;             //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .Context
                                                                                                                                                      
        SDK_NONVOL_PROPERTIES( "_IO_STACK_LOCATION.$", 0x48, true, 0xda32e576b62f28aa );                                                              
        SDK_FIXED_SIZE( stack_location_t, 0x48 );                                                                                                     
    };                                                                                                                                                
};
#include "magic/stack_location_t.end.hpp"
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u5_create_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u10_create_pipe_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u15_create_mailslot_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u20_read_t, 0x18 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u25_write_t, 0x18 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u26_query_directory_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u31_notify_directory_t, 0x10 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u36_query_file_t, 0x10 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u41_set_file_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u46_query_ea_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u51_set_ea_t, 0x4 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u56_query_volume_t, 0x10 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u61_set_volume_t, 0x10 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u62_file_system_control_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u67_lock_control_t, 0x18 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u72_device_io_control_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u77_query_security_t, 0x10 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u82_set_security_t, 0x10 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u87_mount_volume_t, 0x10 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u92_verify_volume_t, 0x10 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u93_scsi_t, 0x8 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u98_query_quota_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u103_set_quota_t, 0x4 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u104_query_device_relations_t, 0x4 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u109_query_interface_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u114_device_capabilities_t, 0x8 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u119_filter_resource_requirements_t, 0x8 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u124_read_write_config_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u129_set_lock_t, 0x1 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u134_query_id_t, 0x4 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u139_query_device_text_t, 0x10 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u144_usage_notification_t, 0x10 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u149_wait_wake_t, 0x4 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u154_power_sequence_t, 0x8 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u159_power_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u164_start_device_t, 0x10 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u169_wmi_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u174_others_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t::u0_parameters_t::u179_notify_directory_ex_t, 0x18 );
SDK_VERIFY( union io::stack_location_t::u0_parameters_t, 0x20 );
SDK_VERIFY( struct io::stack_location_t, 0x48 );
