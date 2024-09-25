#pragma once
#include <sdkgen/support_library.hpp>
#include "rebalance_flags_t.hpp"
#include "device_iommu_domain_policy_t.hpp"

namespace win { struct plugplay_control_status_data_t; }

#include "magic/device_action_request_argument_t.start.hpp"
namespace pnp
{
    // [union _PNP_DEVICE_ACTION_REQUEST_ARGUMENT]
    // => Windows 11
    //
    union device_action_request_argument_t                                                                     
    {                                                                                                          
        struct u0_clear_problem_t                                                                              
        {                                                                                                      
            // Windows 11                                                                                      
            //                                                                                                 
            _m00 uint32_t problem_code_to_clear;                                                                 //{ +0x0000    } | .ProblemCodeToClear
                                                                                                               
            SDK_MAGIC_PROPERTIES( "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.ClearProblem.$", 0x0, false, 0xba8abf92d537198 );                                                    
            SDK_FIXED_SIZE( u0_clear_problem_t, 0x4 );                                                         
        };                                                                                                     
                                                                                                               
        struct u1_reenumerate_device_only_t                                                                    
        {                                                                                                      
            // Windows 11                                                                                      
            //                                                                                                 
            _m03 uint8_t clear_waiting_for_fdo;                                                                  //{ +0x0000    } | .ClearWaitingForFdo
                                                                                                               
            SDK_MAGIC_PROPERTIES( "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.ReenumerateDeviceOnly.$", 0x0, false, 0x98c908c5879fc20c );                                                    
            SDK_FIXED_SIZE( u1_reenumerate_device_only_t, 0x1 );                                                    
        };                                                                                                     
                                                                                                               
        struct u2_resource_requirements_changed_t                                                              
        {                                                                                                      
            // Windows 11                                                                                      
            //                                                                                                 
            _m05 uint8_t stop_required;                                                                          //{ +0x0000    } | .StopRequired
                                                                                                               
            SDK_MAGIC_PROPERTIES( "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.ResourceRequirementsChanged.$", 0x0, false, 0xf5f159d51eac9dc5 );                                            
            SDK_FIXED_SIZE( u2_resource_requirements_changed_t, 0x1 );                                            
        };                                                                                                     
                                                                                                               
        struct u3_request_device_reset_t                                                                       
        {                                                                                                      
            // Windows 11                                                                                      
            //                                                                                                 
            _m07 uint32_t flags;                                                                                 //{ +0x0000    } | .Flags
                                                                                                               
            SDK_MAGIC_PROPERTIES( "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.RequestDeviceReset.$", 0x0, false, 0xddbb70090eaca749 );                                    
            SDK_FIXED_SIZE( u3_request_device_reset_t, 0x4 );                                                  
        };                                                                                                     
                                                                                                               
        struct u4_set_device_problem_t                                                                         
        {                                                                                                      
            // Windows 11                                                                                      
            //                                                                                                 
            _m09 struct win::plugplay_control_status_data_t* control_status_data;                                //{ +0x0000    } | .ControlStatusData
                                                                                                               
            SDK_MAGIC_PROPERTIES( "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.SetDeviceProblem.$", 0x0, false, 0x46b3976df3ff0449 );                                                  
            SDK_FIXED_SIZE( u4_set_device_problem_t, 0x8 );                                                    
        };                                                                                                     
                                                                                                               
        struct u5_update_console_lock_state_t                                                                  
        {                                                                                                      
            // Windows 11                                                                                      
            //                                                                                                 
            _m11 enum pnp::device_iommu_domain_policy_t domain_policy;                                           //{ +0x0000    } | .DomainPolicy
                                                                                                               
            SDK_MAGIC_PROPERTIES( "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.UpdateConsoleLockState.$", 0x0, false, 0x9cfe0ed59ad3b633 );                                            
            SDK_FIXED_SIZE( u5_update_console_lock_state_t, 0x4 );                                             
        };                                                                                                     
                                                                                                               
        // Windows 11                                                                                          
        //                                                                                                     
        _m01 u0_clear_problem_t                                                  clear_problem;                  //{ +0x0000    } | .ClearProblem
        _m02 union pnp::rebalance_flags_t                                        rebalance;                      //{ +0x0000    } | .Rebalance
        _m04 u1_reenumerate_device_only_t                                        reenumerate_device_only;        //{ +0x0000    } | .ReenumerateDeviceOnly
        _m06 u2_resource_requirements_changed_t                                  resource_requirements_changed;  //{ +0x0000    } | .ResourceRequirementsChanged
        _m08 u3_request_device_reset_t                                           request_device_reset;           //{ +0x0000    } | .RequestDeviceReset
        _m10 u4_set_device_problem_t                                             set_device_problem;             //{ +0x0000    } | .SetDeviceProblem
        _m12 u5_update_console_lock_state_t                                      update_console_lock_state;      //{ +0x0000    } | .UpdateConsoleLockState
        _m13 uint64_t                                                            as_ulong64;                     //{ +0x0000    } | .AsUlong64
                                                                                                               
        SDK_MAGIC_PROPERTIES( "_PNP_DEVICE_ACTION_REQUEST_ARGUMENT.$", 0x0, false, 0xe3a500382635544e );                              
        SDK_FIXED_SIZE( device_action_request_argument_t, 0x8 );                                               
    };                                                                                                         
};
#include "magic/device_action_request_argument_t.end.hpp"
SDK_VERIFY( struct pnp::device_action_request_argument_t::u0_clear_problem_t, 0x4 );
SDK_VERIFY( struct pnp::device_action_request_argument_t::u1_reenumerate_device_only_t, 0x1 );
SDK_VERIFY( struct pnp::device_action_request_argument_t::u2_resource_requirements_changed_t, 0x1 );
SDK_VERIFY( struct pnp::device_action_request_argument_t::u3_request_device_reset_t, 0x4 );
SDK_VERIFY( struct pnp::device_action_request_argument_t::u4_set_device_problem_t, 0x8 );
SDK_VERIFY( struct pnp::device_action_request_argument_t::u5_update_console_lock_state_t, 0x4 );
SDK_VERIFY( union pnp::device_action_request_argument_t, 0x8 );
