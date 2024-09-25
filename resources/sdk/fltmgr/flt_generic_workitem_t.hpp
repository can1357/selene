#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "fltp_workitem_t.hpp"
#include "../io/priority_info_t.hpp"
#include "../nt/work_queue_type_t.hpp"

#include "magic/flt_generic_workitem_t.start.hpp"
namespace fltmgr
{
    struct flt_object_t;
    struct flt_callback_data_t;
    struct flt_generic_workitem_t;
    struct flt_deferred_io_workitem_t;

    // [struct _FLT_GENERIC_WORKITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_generic_workitem_t                                   
    {                                                               
        using deferred_worker_routine_t = sdk::function<void(struct fltmgr::flt_deferred_io_workitem_t*, struct fltmgr::flt_callback_data_t*, void*)>*;                        
        using generic_worker_routine_t =  sdk::function<void(struct fltmgr::flt_generic_workitem_t*, void*, void*)>*;                        
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                          
        _m00 struct fltmgr::fltp_workitem_t flt_work;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FltWork
        _m01 enum nt::work_queue_type_t     queue_type;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .QueueType
        _m02 deferred_worker_routine_t      deferred_worker_routine;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DeferredWorkerRoutine
        _m03 generic_worker_routine_t       generic_worker_routine;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .GenericWorkerRoutine
        _m04 void*                          context;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Context
        _m05 struct io::priority_info_t     io_priority_info;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .IoPriorityInfo
        _m06 struct nt::guid_t              activity_id;              //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ActivityId
        _m07 struct fltmgr::flt_object_t*   flt_object;               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .FltObject
                                                                    
        SDK_MAGIC_PROPERTIES( "_FLT_GENERIC_WORKITEM.$", 0x68, true, 0xe23c5890d30b0218 );                        
        SDK_FIXED_SIZE( flt_generic_workitem_t, 0x68 );                        
    };                                                              
};
#include "magic/flt_generic_workitem_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_generic_workitem_t, 0x68 );
