#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct status_block_t; }

#include "magic/fast_io_dispatch_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct mdl_t;
    struct eprocess_t;
    struct kprocess_t;
    struct eresource_t;
    struct file_object_t;
    struct device_object_t;
    struct compressed_data_info_t;
    struct file_basic_information_t;
    struct file_standard_information_t;
    struct file_network_open_information_t;

    // [struct _FAST_IO_DISPATCH]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fast_io_dispatch_t                                                                    
    {                                                                                            
        using pfast_io_check_if_possible_t =       sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, uint32_t, uint8_t, struct io::status_block_t*, struct nt::device_object_t*)>*;                                   
        using fast_io_read_t =                     sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, uint32_t, void*, struct io::status_block_t*, struct nt::device_object_t*)>*;                                   
        using fast_io_write_t =                    sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint8_t, uint32_t, void*, struct io::status_block_t*, struct nt::device_object_t*)>*;                                   
        using pfast_io_query_basic_info_t =        sdk::function<uint8_t(struct nt::file_object_t*, uint8_t, struct nt::file_basic_information_t*, struct io::status_block_t*, struct nt::device_object_t*)>*;                                   
        using pfast_io_query_standard_info_t =     sdk::function<uint8_t(struct nt::file_object_t*, uint8_t, struct nt::file_standard_information_t*, struct io::status_block_t*, struct nt::device_object_t*)>*;                                   
        using fast_io_lock_t =                     sdk::variant<sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, int64_t*, struct nt::kprocess_t*, uint32_t, uint8_t, uint8_t, struct io::status_block_t*, struct nt::device_object_t*)>*, sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, int64_t*, struct nt::eprocess_t*, uint32_t, uint8_t, uint8_t, struct io::status_block_t*, struct nt::device_object_t*)>*>;                                   
        using fast_io_unlock_single_t =            sdk::variant<sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, int64_t*, struct nt::kprocess_t*, uint32_t, struct io::status_block_t*, struct nt::device_object_t*)>*, sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, int64_t*, struct nt::eprocess_t*, uint32_t, struct io::status_block_t*, struct nt::device_object_t*)>*>;                                   
        using fast_io_unlock_all_t =               sdk::variant<sdk::function<uint8_t(struct nt::file_object_t*, struct nt::kprocess_t*, struct io::status_block_t*, struct nt::device_object_t*)>*, sdk::function<uint8_t(struct nt::file_object_t*, struct nt::eprocess_t*, struct io::status_block_t*, struct nt::device_object_t*)>*>;                                   
        using pfast_io_unlock_all_by_key_t =       sdk::function<uint8_t(struct nt::file_object_t*, void*, uint32_t, struct io::status_block_t*, struct nt::device_object_t*)>*;                                   
        using pfast_io_device_control_t =          sdk::function<uint8_t(struct nt::file_object_t*, uint8_t, void*, uint32_t, void*, uint32_t, uint32_t, struct io::status_block_t*, struct nt::device_object_t*)>*;                                   
        using pfast_io_detach_device_t =           sdk::function<void(struct nt::device_object_t*, struct nt::device_object_t*)>*;                                   
        using pfast_io_query_network_open_info_t = sdk::function<uint8_t(struct nt::file_object_t*, uint8_t, struct nt::file_network_open_information_t*, struct io::status_block_t*, struct nt::device_object_t*)>*;                                   
        using pfast_io_acquire_for_mod_write_t =   sdk::function<int32_t(struct nt::file_object_t*, int64_t*, struct nt::eresource_t**, struct nt::device_object_t*)>*;                                   
        using mdl_read_t =                         sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, struct nt::mdl_t**, struct io::status_block_t*, struct nt::device_object_t*)>*;                                   
        using mdl_read_complete_t =                sdk::function<uint8_t(struct nt::file_object_t*, struct nt::mdl_t*, struct nt::device_object_t*)>*;                                   
        using prepare_mdl_write_t =                sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, struct nt::mdl_t**, struct io::status_block_t*, struct nt::device_object_t*)>*;                                   
        using mdl_write_complete_t =               sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, struct nt::mdl_t*, struct nt::device_object_t*)>*;                                   
        using fast_io_read_compressed_t =          sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, void*, struct nt::mdl_t**, struct io::status_block_t*, struct nt::compressed_data_info_t*, uint32_t, struct nt::device_object_t*)>*;                                   
        using fast_io_write_compressed_t =         sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, uint32_t, uint32_t, void*, struct nt::mdl_t**, struct io::status_block_t*, struct nt::compressed_data_info_t*, uint32_t, struct nt::device_object_t*)>*;                                   
        using mdl_read_complete_compressed_t =     sdk::function<uint8_t(struct nt::file_object_t*, struct nt::mdl_t*, struct nt::device_object_t*)>*;                                   
        using mdl_write_complete_compressed_t =    sdk::function<uint8_t(struct nt::file_object_t*, int64_t*, struct nt::mdl_t*, struct nt::device_object_t*)>*;                                   
        using pfast_io_query_open_t =              sdk::function<uint8_t(struct nt::irp_t*, struct nt::file_network_open_information_t*, struct nt::device_object_t*)>*;                                   
        using pfast_io_release_for_mod_write_t =   sdk::function<int32_t(struct nt::file_object_t*, struct nt::eresource_t*, struct nt::device_object_t*)>*;                                   
        using acquire_for_cc_flush_t =             sdk::function<int32_t(struct nt::file_object_t*, struct nt::device_object_t*)>*;                                   
        using release_for_cc_flush_t =             sdk::function<int32_t(struct nt::file_object_t*, struct nt::device_object_t*)>*;                                   
                                                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                       
        _m000 uint32_t                                        size_of_fast_io_dispatch;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SizeOfFastIoDispatch
        _m001 pfast_io_check_if_possible_t                    fast_io_check_if_possible;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FastIoCheckIfPossible
        _m002 fast_io_read_t                                  fast_io_read;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FastIoRead
        _m003 fast_io_write_t                                 fast_io_write;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FastIoWrite
        _m004 pfast_io_query_basic_info_t                     fast_io_query_basic_info;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FastIoQueryBasicInfo
        _m005 pfast_io_query_standard_info_t                  fast_io_query_standard_info;         //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .FastIoQueryStandardInfo
        _m006 fast_io_lock_t                                  fast_io_lock;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .FastIoLock
        _m007 fast_io_unlock_single_t                         fast_io_unlock_single;               //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .FastIoUnlockSingle
        _m008 fast_io_unlock_all_t                            fast_io_unlock_all;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .FastIoUnlockAll
        _m009 pfast_io_unlock_all_by_key_t                    fast_io_unlock_all_by_key;           //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .FastIoUnlockAllByKey
        _m010 pfast_io_device_control_t                       fast_io_device_control;              //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .FastIoDeviceControl
        _m011 sdk::function<void(struct nt::file_object_t*)>* acquire_file_for_nt_create_section;  //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .AcquireFileForNtCreateSection
        _m012 sdk::function<void(struct nt::file_object_t*)>* release_file_for_nt_create_section;  //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .ReleaseFileForNtCreateSection
        _m013 pfast_io_detach_device_t                        fast_io_detach_device;               //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .FastIoDetachDevice
        _m014 pfast_io_query_network_open_info_t              fast_io_query_network_open_info;     //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .FastIoQueryNetworkOpenInfo
        _m015 pfast_io_acquire_for_mod_write_t                acquire_for_mod_write;               //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .AcquireForModWrite
        _m016 mdl_read_t                                      mdl_read;                            //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .MdlRead
        _m017 mdl_read_complete_t                             mdl_read_complete;                   //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .MdlReadComplete
        _m018 prepare_mdl_write_t                             prepare_mdl_write;                   //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .PrepareMdlWrite
        _m019 mdl_write_complete_t                            mdl_write_complete;                  //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .MdlWriteComplete
        _m020 fast_io_read_compressed_t                       fast_io_read_compressed;             //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .FastIoReadCompressed
        _m021 fast_io_write_compressed_t                      fast_io_write_compressed;            //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .FastIoWriteCompressed
        _m022 mdl_read_complete_compressed_t                  mdl_read_complete_compressed;        //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .MdlReadCompleteCompressed
        _m023 mdl_write_complete_compressed_t                 mdl_write_complete_compressed;       //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .MdlWriteCompleteCompressed
        _m024 pfast_io_query_open_t                           fast_io_query_open;                  //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .FastIoQueryOpen
        _m025 pfast_io_release_for_mod_write_t                release_for_mod_write;               //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .ReleaseForModWrite
        _m026 acquire_for_cc_flush_t                          acquire_for_cc_flush;                //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .AcquireForCcFlush
        _m027 release_for_cc_flush_t                          release_for_cc_flush;                //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .ReleaseForCcFlush
                                                                                                 
        SDK_NONVOL_PROPERTIES( "_FAST_IO_DISPATCH.$", 0xe0, true, 0xc650066accf8ca69 );                                   
        SDK_FIXED_SIZE( fast_io_dispatch_t, 0xe0 );                                              
    };                                                                                           
};
#include "magic/fast_io_dispatch_t.end.hpp"
SDK_VERIFY( struct nt::fast_io_dispatch_t, 0xe0 );
