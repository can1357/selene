#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::direct_x_database_helper_telemetry
{
    // [bLoggedDListMismatchInfo@DirectXDatabaseHelperTelemetry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .data:0xcdcc8, 0x17e70 bytes
    // dxgi.dll .data:0xcdcc8, 0x17e70 bytes
    // dxgi.dll .data:0xced18, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) b_logged_d_list_mismatch_info;
    
    // [LogDListsQueryResults@DirectXDatabaseHelperTelemetry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7e4a8, 0x17e70 bytes
    // dxgi.dll .text:0x7e628, 0x17e70 bytes
    // dxgi.dll .text:0x7f068, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) log_d_lists_query_results;
    
    // [LogDuplicateAppEntryInDatabase@DirectXDatabaseHelperTelemetry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7e698, 0x17e70 bytes
    // dxgi.dll .text:0x7e818, 0x17e70 bytes
    // dxgi.dll .text:0x7f1b4, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) log_duplicate_app_entry_in_database;
    
    // [m_piiFilter@DirectXDatabaseHelperTelemetry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .data:0xcebc8, 0x17e70 bytes
    // dxgi.dll .data:0xcebc8, 0x17e70 bytes
    // dxgi.dll .data:0xcfc18, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) m_pii_filter;
    
    // [SanitizeProcessName@DirectXDatabaseHelperTelemetry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7e850, 0x17e70 bytes
    // dxgi.dll .text:0x7e9d0, 0x17e70 bytes
    // dxgi.dll .text:0x7f2c4, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) sanitize_process_name;
};
#include "magic/api.end.hpp"
