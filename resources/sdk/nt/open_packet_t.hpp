#pragma once
#include <sdkgen/support_library.hpp>
#include "create_file_type_t.hpp"
#include "file_information_class_t.hpp"
#include "../io/driver_create_context_t.hpp"

#include "magic/open_packet_t.start.hpp"
namespace nt
{
    struct file_object_t;
    struct device_object_t;
    struct dummy_file_object_t;
    struct object_attributes_t;
    struct file_basic_information_t;
    struct file_network_open_information_t;

    // [struct _OPEN_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct open_packet_t                                                              
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                            
        _m000 int16_t                                     type;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m001 int16_t                                     size;                         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m002 struct nt::file_object_t*                   file_object;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObject
        _m003 int32_t                                     final_status;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FinalStatus
        _m004 uint64_t                                    information;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Information
        _m005 uint32_t                                    parse_check;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ParseCheck
        _m006 struct nt::file_object_t*                   related_file_object;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RelatedFileObject
        _m007 struct nt::device_object_t*                 referenced_device_object;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ReferencedDeviceObject
        _m008 struct nt::object_attributes_t*             original_attributes;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OriginalAttributes
        _m009 int64_t                                     allocation_size;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AllocationSize
        _m010 uint32_t                                    create_options;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CreateOptions
        _m011 uint16_t                                    file_attributes;              //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .FileAttributes
        _m012 uint16_t                                    share_access;                 //{ +0x0046    +0x0046    +0x0046    +0x0046    } | .ShareAccess
        _m013 void*                                       ea_buffer;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .EaBuffer
        _m014 uint32_t                                    ea_length;                    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .EaLength
        _m015 uint32_t                                    options;                      //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .Options
        _m016 uint32_t                                    disposition;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Disposition
        _m017 struct nt::file_basic_information_t*        basic_information;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .BasicInformation
        _m018 struct nt::file_network_open_information_t* network_information;          //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .NetworkInformation
        _m019 enum nt::create_file_type_t                 create_file_type;             //{ +0x0070    +0x0078    +0x0078    +0x0078    } | .CreateFileType
        _m020 void*                                       mailslot_or_pipe_parameters;  //{ +0x0078    +0x0080    +0x0080    +0x0080    } | .MailslotOrPipeParameters
        _m021 uint8_t                                     override;                     //{ +0x0080    +0x0088    +0x0088    +0x0088    } | .Override
        _m022 uint8_t                                     query_only;                   //{ +0x0081    +0x0089    +0x0089    +0x0089    } | .QueryOnly
        _m023 uint8_t                                     delete_only;                  //{ +0x0082    +0x008a    +0x008a    +0x008a    } | .DeleteOnly
        _m024 uint8_t                                     full_attributes;              //{ +0x0083    +0x008b    +0x008b    +0x008b    } | .FullAttributes
        _m025 struct nt::dummy_file_object_t*             local_file_object;            //{ +0x0088    +0x0090    +0x0090    +0x0090    } | .LocalFileObject
        _m026 uint32_t                                    internal_flags;               //{ +0x0090    +0x0098    +0x0098    +0x0098    } | .InternalFlags
        _m027 char                                        access_mode;                  //{ +0x0094    +0x009c    +0x009c    +0x009c    } | .AccessMode
        _m028 struct io::driver_create_context_t          driver_create_context;        //{ +0x0098    +0x00a0    +0x00a0    +0x00a0    } | .DriverCreateContext
                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                            
        _m029 void*                                       file_information;             //{ +0x0070    +0x0070    +0x0070    } | .FileInformation
        _m030 enum nt::file_information_class_t           file_information_class;       //{ +0x00c8    +0x00c8    +0x00c8    } | .FileInformationClass
        _m031 uint32_t                                    file_information_length;      //{ +0x00cc    +0x00cc    +0x00cc    } | .FileInformationLength
        _m032 uint8_t                                     filter_query;                 //{ +0x00d0    +0x00d0    +0x00d0    } | .FilterQuery
                                                                                      
        // Windows 11                                                                 
        //                                                                            
        _m033 int64_t                                     extended_create_flags;        //{ +0x00d8    } | .ExtendedCreateFlags
                                                                                      
        SDK_MAGIC_PROPERTIES( "_OPEN_PACKET.$", 0xd8, true, 0xce03e628104ce0b8 );                            
        SDK_DYNAMIC_SIZE( open_packet_t );                                            
    };                                                                                
};
#include "magic/open_packet_t.end.hpp"
