#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_LockExpMgr_AppHostingModel]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_lock_exp_mgr_app_hosting_model_t : uint8_t
    {                                                            
        none =                              0x0,                   // Windows 10 v2004, Windows 10 v20H2
        delay_launched_experience_manager = 0x1,                   // Windows 10 v2004, Windows 10 v20H2
        prelaunched_experience_manager =    0x2,                   // Windows 10 v2004, Windows 10 v20H2
    };                                                           
};
