#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum PDCCLIENTID]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pdcclientid_t : int32_t                      
    {                                                       
        invalid_client =                            0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        plm_client =                                0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nqm_client =                                0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wns_client =                                0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dam_client =                                0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wcm_client =                                0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ncsi_client =                               0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dhcp_client =                               0x8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcpip_client =                              0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wu_client =                                 0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gp_client =                                 0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nca_client =                                0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bi_client =                                 0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        msched_client =                             0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspendresume_client =                      0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activation_client =                         0x12,     // Windows 10 v1607
        internal_client =                           0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activation_test_client =                    0x13,     // Windows 10 v1607
        default_km_test_client_exempted =           0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        default_um_test_client_exempted =           0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        plm_phase_test_client =                     0x14,     // Windows 10 v1607
        dam_phase_test_client =                     0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        low_power_phase_test_client =               0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resiliency_notification_phase_test_client = 0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nqm_resiliency_test_client =                0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dam_resiliency_test_client =                0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dam_km_test_client =                        0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dam_um_test_client =                        0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        singleton_test_client =                     0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        network_service_test_client =               0x1d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        network_service2_test_client =              0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_service_test_client =                0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activ_notif_dam_resil_test_client =         0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activ_notif_net_resil_test_client =         0x21,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shell_client =                              0x22,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maintenance_client =                        0x23,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sync_client =                               0x24,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        idm_client =                                0x25,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cortana_voice_activation_client =           0x26,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tethering_client =                          0x27,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        audio_client =                              0x28,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lock_screen =                               0x29,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        lrec_client =                               0x2a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_bw_client =                              0x2b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_media_streaming_client =                 0x2c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_maps_client =                            0x2e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_sync_client =                            0x2f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        setting_sync_client =                       0x30,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_edm_client =                             0x31,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_wallet_client =                          0x32,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_location_client =                        0x33,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_cm_client =                              0x35,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_dcp_client =                             0x36,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_wifiauto_client =                        0x37,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bitlocker_client =                          0x38,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mdm_certinstaller_client =                  0x39,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_im_client =                              0x3a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_mms_client =                             0x3b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deviceenroller_client =                     0x3c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_wifi_scanning_client =                   0x3d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_omadm_client =                           0x3e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_telemetry_check_client =                 0x3f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_dis_client =                             0x40,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bits_client =                               0x41,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_voip_execution_client =                  0x42,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_reserved_client3 =                       0x43,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleep_study_client =                        0x44,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_autotimeupdate_client =                  0x45,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hyperv_client =                             0x46,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_signal_client =                          0x47,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_signal_client =                          0x48,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_health_attestation_client =          0x49,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        xb_system_client =                          0x4a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        xb_host_client =                            0x4b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        print_job_manager_client =                  0x4c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        telemetry_client =                          0x4d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error_reporting_client =                    0x4e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        xbox_ntm =                                  0x4f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cbe_client =                                0x50,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        find_my_phone_client =                      0x51,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        command_channel_client =                    0x52,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ppm_profiles_client =                       0x53,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wifi_calling_client =                       0x54,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wu_reboot_client =                          0x55,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sysmain_client =                            0x56,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        xbox_update_client =                        0x57,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        chat_service_client =                       0x58,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        find_my_device_client =                     0x59,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notification_forwarding_and_action_client = 0x5a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        install_agent_client =                      0x5b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        xbox_wake_on_voice =                        0x5c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        plm_audio_client =                          0x5d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_bckaudio_client =                        0x5e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_on_lan_client =                        0x5f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wp_cloud_messaging_client =                 0x60,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        data_migration_manager =                    0x61,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_sound_manager_client =                0x62,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //number_of_clients =                       0x62,     // Windows 10 v1607
        wwan_dormancy_hint_client =                 0x63,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ham_client =                                0x64,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        filesharingserver_client =                  0x65,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        directed_drips_task_client =                0x66,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        directed_drips_lpe_client =                 0x67,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        directed_drips_plm_client =                 0x68,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        httpsdatasource_client =                    0x69,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        terminalserver_connection_client =          0x6a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        terminalserver_session_client =             0x6b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        anynetwork_resiliency_client =              0x6c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        xbox_nui_client =                           0x6e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wifi_calling_ims_client =                   0x6f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleepstudy_helper_user_client =             0x70,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleepstudy_helper_kernel_client =           0x71,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        container_manager_client =                  0x72,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        number_of_clients =                         0x73,     // Windows 10 v2004, Windows 10 v20H2
        update_orchestrator_client =                0x73,     // Windows 11
        update_ux_client =                          0x74,     // Windows 11
        hot_key_manager_client =                    0x75,     // Windows 11
        servicing_platform =                        0x76,     // Windows 11
        tnc_client =                                0x77,     // Windows 11
        user_shutdown_client =                      0x78,     // Windows 11
        kernel_plug_and_play =                      0x79,     // Windows 11
        //number_of_clients =                       0x7a,     // Windows 11
    };                                                      
};
