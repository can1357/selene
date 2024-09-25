#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum AppModelPolicy_Type]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class app_model_policy_type_t : int32_t                       
    {                                                                  
        lifecycle_manager =                                    0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_data_access =                                      0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        windowing_model =                                      0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll_search_order =                                     0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fusion =                                               0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_windows_code_loading =                             0x6,      // Windows 10 v1607
        non_windows_codec_loading =                            0x6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_end =                                          0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        begin_thread_init =                                    0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        developer_information =                                0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        create_file_access =                                   0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        implicit_package_breakaway =                           0xb,      // Windows 10 v1607
        implicit_package_breakaway_internal =                  0xb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_activation_shim =                              0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_known_to_state_repository =                        0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        audio_management =                                     0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        package_may_contain_public_com_registrations =         0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        package_may_contain_private_com_registrations =        0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        com_launch_create_process_extensions =                 0x11,     // Windows 10 v1607
        launch_create_process_extensions =                     0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        clr_compat =                                           0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        loader_ignore_altered_search_for_relative_path =       0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        implicitly_activate_classic_aaa_servers_as_iu =        0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        com_classic_catalog =                                  0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        com_unmarshaling =                                     0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        com_app_launch_perf_enhancements =                     0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        com_security_initialization =                          0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ro_initialize_single_threaded_behavior =               0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        com_default_exception_handling =                       0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        com_oop_proxy_agility =                                0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_service_lifetime =                                 0x1c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_service_lifetime_policy =                          0x1c,     // Windows 10 v1607
        web_platform =                                         0x1d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        win_inet_storage_partitioning =                        0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        indexer_protocol_handler_host =                        0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        loader_include_user_directories =                      0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        convert_app_container_to_restricted_app_container =    0x21,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //count =                                              0x21,     // Windows 10 v1607
        package_may_contain_private_mapi_provider =            0x22,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        admin_process_package_claims =                         0x23,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        registry_redirection_behavior =                        0x24,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bypass_create_process_appx_extension =                 0x25,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        known_folder_redirection =                             0x26,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        private_activate_as_package_winrt_classes =            0x27,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_private_folder_redirection =                       0x28,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        global_system_app_data_access =                        0x29,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        console_handle_inheritance =                           0x2a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        console_buffer_access =                                0x2b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        convert_caller_token_to_user_token_for_deployment =    0x2c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        shell_execute_retrieve_identity_from_current_process = 0x2d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        code_integrity_signing =                               0x2e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ptc_activation =                                       0x2f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        com_intra_package_rpc_call =                           0x30,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        load_user32_shim_on_windows_core_os =                  0x31,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        security_capabilities_override =                       0x32,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        current_directory_override =                           0x33,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        com_token_matching_for_aaa_servers =                   0x34,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_original_file_name_in_token_fqbn_attribute =       0x35,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        loader_include_alternate_forwarders =                  0x36,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =                                                0x37,     // Windows 10 v2004, Windows 10 v20H2
        pull_package_dependency_data =                         0x37,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_instancing_error_behavior =                        0x38,     // Windows 11
        background_task_registration_type =                    0x39,     // Windows 11
        //count =                                              0x3a,     // Windows 11
        mods_power_notifification =                            0x3a,     // Windows 11
    };                                                                 
};
