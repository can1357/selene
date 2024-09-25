#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_type_t.hpp"
#include "../nt/kevent_t.hpp"
#include "fltp_workitem_t.hpp"
#include "flt_callback_data_t.hpp"
#include "flt_io_parameter_block_t.hpp"
#include "../etw/kernel_trace_timestamp_t.hpp"

namespace fs { struct filter_callback_data_t; }
namespace nt { struct device_object_t;        }
namespace nt { struct file_object_t;          }
namespace nt { struct irp_t;                  }
namespace nt { struct mdl_t;                  }

#include "magic/irp_ctrl_t.start.hpp"
namespace fltmgr
{
    struct irp_ctrl_t;
    struct flt_instance_t;
    struct callback_node_t;
    struct irp_call_ctrl_t;
    struct completion_node_t;
    struct stream_list_ctrl_t;
    struct name_cache_create_ctrl_t;

    // [struct _IRP_CTRL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irp_ctrl_t                                                                                     
    {                                                                                                     
        struct u0_pre_op_t                                                                                
        {                                                                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                                                            
            _m14 struct fltmgr::irp_call_ctrl_t* icc;                                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Icc
                                                                                                          
            SDK_MAGIC_PROPERTIES( "_IRP_CTRL.preOp.$", 0x8, true, 0xa8e5cdb8c6d824ae );                                   
            SDK_FIXED_SIZE( u0_pre_op_t, 0x8 );                                                           
        };                                                                                                
                                                                                                          
        struct u4_post_op_t                                                                               
        {                                                                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
            //                                                                                            
            _m16 struct nt::mdl_t* swapped_buffer_mdl;                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SwappedBufferMdl
                                                                                                          
            SDK_MAGIC_PROPERTIES( "_IRP_CTRL.postOp.$", 0x8, true, 0x333f8ed1977daebe );                                                  
            SDK_FIXED_SIZE( u4_post_op_t, 0x8 );                                                          
        };                                                                                                
                                                                                                          
        struct u8_create_irp_t                                                                            
        {                                                                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                                                            
            _m25 struct fltmgr::name_cache_create_ctrl_t* name_cache_ctrl;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NameCacheCtrl
            _m26 void*                                    saved_fs_context;                                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SavedFsContext
            _m27 nt::unicode_view                         saved_file_name;                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SavedFileName
                                                                                                          
            SDK_MAGIC_PROPERTIES( "_IRP_CTRL.CreateIrp.$", 0x20, true, 0x55b6acab4fdf2331 );                                                
            SDK_FIXED_SIZE( u8_create_irp_t, 0x20 );                                                      
        };                                                                                                
                                                                                                          
        struct u12_close_irp_t                                                                            
        {                                                                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                                                            
            _m29 struct fltmgr::stream_list_ctrl_t* stream_list_ctrl;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StreamListCtrl
                                                                                                          
            SDK_MAGIC_PROPERTIES( "_IRP_CTRL.CloseIrp.$", 0x8, true, 0x24454a9753991076 );                                                
            SDK_FIXED_SIZE( u12_close_irp_t, 0x8 );                                                       
        };                                                                                                
                                                                                                          
        using async_completion_routine_t = sdk::function<void(struct fltmgr::flt_callback_data_t*, void*)>*;                               
                                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                                                
        _m000 union fltmgr::flt_type_t                                     type;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m001 uint32_t                                                     flags;                           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m002 uint8_t                                                      major_function;                  //{ +0x0008    +0x000c    +0x000c    +0x000c    } | .MajorFunction
        _m003 uint8_t                                                      completion_stack_length;         //{ +0x000a    +0x000e    +0x000e    +0x000e    } | .CompletionStackLength
        _m004 uint8_t                                                      next_completion;                 //{ +0x000b    +0x000f    +0x000f    +0x000f    } | .NextCompletion
        _m005 struct fltmgr::completion_node_t*                            completion_stack;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CompletionStack
        _m006 struct nt::kevent_t                                          sync_event;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SyncEvent
        _m007 struct nt::irp_t*                                            irp;                             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Irp
        _m008 struct fs::filter_callback_data_t*                           fs_filter_data;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FsFilterData
        _m009 async_completion_routine_t                                   async_completion_routine;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AsyncCompletionRoutine
        _m010 void*                                                        async_completion_context;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AsyncCompletionContext
        _m011 struct fltmgr::flt_instance_t*                               initiating_instance;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .InitiatingInstance
        _m012 struct fltmgr::callback_node_t*                              pending_callback_node;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .PendingCallbackNode
        _m013 struct fltmgr::callback_node_t*                              starting_callback_node;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .StartingCallbackNode
        _m015 u0_pre_op_t                                                  pre_op;                          //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .preOp
        _m017 u4_post_op_t                                                 post_op;                         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .postOp
        _m018 sdk::function<void(struct fltmgr::irp_ctrl_t*)>*             post_completion_routine;         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .PostCompletionRoutine
        _m019 struct nt::device_object_t*                                  device_object;                   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .DeviceObject
        _m020 struct nt::file_object_t*                                    file_object;                     //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .FileObject
        _m021 struct fltmgr::fltp_workitem_t                               flt_work;                        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .FltWork
        _m022 void*                                                        pending_callback_context;        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .PendingCallbackContext
        _m023 struct fltmgr::completion_node_t*                            cached_completion_node;          //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .CachedCompletionNode
        _m024 int32_t                                                      pending_status;                  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .PendingStatus
        _m028 u8_create_irp_t                                              create_irp;                      //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .CreateIrp
        _m030 u12_close_irp_t                                              close_irp;                       //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .CloseIrp
        _m031 struct etw::kernel_trace_timestamp_t                         operation_timestamp;             //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .OperationTimestamp
        _m032 int32_t                                                      trace_status;                    //{ +0x00d0    +0x00e0    +0x00e0    +0x00e0    } | .TraceStatus
        _m033 struct fltmgr::flt_callback_data_t                           data;                            //{ +0x00d8    +0x00e8    +0x00e8    +0x00e8    } | .Data
        _m034 struct fltmgr::flt_io_parameter_block_t                      working_parameters;              //{ +0x0130    +0x0140    +0x0140    +0x0140    } | .WorkingParameters
                                                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
        //                                                                                                
        _m035 uint32_t                                                     look_aside_processor_index;      //{ +0x0008    +0x0008    +0x0008    } | .LookAsideProcessorIndex
        _m036 uint8_t                                                      data_scan_conflict_retry_count;  //{ +0x000d    +0x000d    +0x000d    } | .DataScanConflictRetryCount
                                                                                                          
        SDK_MAGIC_PROPERTIES( "_IRP_CTRL.$", 0x188, true, 0xb1e304e6c1094c6c );                               
        SDK_DYNAMIC_SIZE( irp_ctrl_t );                                                                   
    };                                                                                                    
};
#include "magic/irp_ctrl_t.end.hpp"
SDK_VERIFY( struct fltmgr::irp_ctrl_t::u0_pre_op_t, 0x8 );
SDK_VERIFY( struct fltmgr::irp_ctrl_t::u4_post_op_t, 0x8 );
SDK_VERIFY( struct fltmgr::irp_ctrl_t::u8_create_irp_t, 0x20 );
SDK_VERIFY( struct fltmgr::irp_ctrl_t::u12_close_irp_t, 0x8 );
