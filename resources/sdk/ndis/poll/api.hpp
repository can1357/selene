#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::poll
{
    // [CompleteTransmittedNbls@NdisPoll]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xbfb54, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) complete_transmitted_nbls;
    
    // [??0NdisPoll@@QEAA@PEAX0P6AX0PEAU_NDIS_POLL_NOTIFICATION@@@ZP6AX0PEAU_NDIS_POLL_DATA@@@Z@Z]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x133b50, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1NdisPoll@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x133bdc, 0x1e858 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [EvtCompleteTransmittedNbls@NdisPoll]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xbfbf0, 0x1e858 bytes
    //
    _m3(sdk::unknown_ptr) evt_complete_transmitted_nbls;
    
    // [EvtIndicateReceivedNbls@NdisPoll]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xbfc10, 0x1e858 bytes
    //
    _m4(sdk::unknown_ptr) evt_indicate_received_nbls;
    
    // [EvtPollDriver@NdisPoll]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xbfc30, 0x1e858 bytes
    //
    _m5(sdk::unknown_ptr) evt_poll_driver;
    
    // [EvtSetMiniportNotificationEnabled@NdisPoll]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xbfc50, 0x1e858 bytes
    //
    _m6(sdk::unknown_ptr) evt_set_miniport_notification_enabled;
    
    // [IndicateReceivedNbls@NdisPoll]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xbfc90, 0x1e858 bytes
    //
    _m7(sdk::unknown_ptr) indicate_received_nbls;
    
    // [Initialize@NdisPoll]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x133c14, 0x1e858 bytes
    //
    _m8(sdk::unknown_ptr) initialize;
    
    // [PollDriver@NdisPoll]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xbfd44, 0x1e858 bytes
    //
    _m9(sdk::unknown_ptr) poll_driver;
    
    // [SetAffinity@NdisPoll]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x133eb0, 0x1e858 bytes
    //
    _n0(sdk::unknown_ptr) set_affinity;
};
#include "magic/api.end.hpp"
