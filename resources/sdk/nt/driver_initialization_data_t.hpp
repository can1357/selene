#pragma once
#include <sdkgen/support_library.hpp>
#include "../dxgk/event_type_t.hpp"
#include "device_power_state_t.hpp"
#include "../kuser/d3dddiformat_t.hpp"
#include "../dxgk/interrupt_type_t.hpp"
#include "../dxgk/surprise_removal_type_t.hpp"

namespace dxgk      { struct child_container_id_t;                          }
namespace dxgk      { struct child_descriptor_t;                            }
namespace dxgk      { struct child_status_t;                                }
namespace dxgk      { struct colorimetry_t;                                 }
namespace dxgk      { struct device_descriptor_t;                           }
namespace dxgk      { struct display_information_t;                         }
namespace dxgk      { struct gpuclockdata_t;                                }
namespace dxgk      { struct nodemetadata_t;                                }
namespace dxgk      { struct pre_start_info_t;                              }
namespace dxgk      { struct start_info_t;                                  }
namespace dxgk::arg { struct acquireswizzlingrange_t;                       }
namespace dxgk::arg { struct beginexclusiveaccess_t;                        }
namespace dxgk::arg { struct buildpagingbuffer_t;                           }
namespace dxgk::arg { struct cancelcommand_t;                               }
namespace dxgk::arg { struct checkmultiplaneoverlaysupport2_t;              }
namespace dxgk::arg { struct checkmultiplaneoverlaysupport3_t;              }
namespace dxgk::arg { struct checkmultiplaneoverlaysupport_t;               }
namespace dxgk::arg { struct closeallocation_t;                             }
namespace dxgk::arg { struct collectdbginfo_t;                              }
namespace dxgk::arg { struct collectdiagnosticinfo_t;                       }
namespace dxgk::arg { struct commitvidpn_t;                                 }
namespace dxgk::arg { struct controldiagnosticreporting_t;                  }
namespace dxgk::arg { struct controlinterrupt2_t;                           }
namespace dxgk::arg { struct controlinterrupt3_t;                           }
namespace dxgk::arg { struct controlmodebehavior_t;                         }
namespace dxgk::arg { struct createallocation_t;                            }
namespace dxgk::arg { struct createcontext_t;                               }
namespace dxgk::arg { struct createdevice_t;                                }
namespace dxgk::arg { struct createhwcontext_t;                             }
namespace dxgk::arg { struct createhwqueue_t;                               }
namespace dxgk::arg { struct createoverlay_t;                               }
namespace dxgk::arg { struct createperiodicframenotification_t;             }
namespace dxgk::arg { struct createprocess_t;                               }
namespace dxgk::arg { struct createprotectedsession_t;                      }
namespace dxgk::arg { struct describeallocation_t;                          }
namespace dxgk::arg { struct destroyallocation_t;                           }
namespace dxgk::arg { struct destroyperiodicframenotification_t;            }
namespace dxgk::arg { struct displaydetectcontrol_t;                        }
namespace dxgk::arg { struct endexclusiveaccess_t;                          }
namespace dxgk::arg { struct enumvidpncofuncmodality_t;                     }
namespace dxgk::arg { struct escape_t;                                      }
namespace dxgk::arg { struct flipoverlay_t;                                 }
namespace dxgk::arg { struct formathistorybuffer_t;                         }
namespace dxgk::arg { struct getmultiplaneoverlaycaps_t;                    }
namespace dxgk::arg { struct getpostcompositioncaps_t;                      }
namespace dxgk::arg { struct getrootpagetablesize_t;                        }
namespace dxgk::arg { struct getscanline_t;                                 }
namespace dxgk::arg { struct getstandardallocationdriverdata_t;             }
namespace dxgk::arg { struct issupportedvidpn_t;                            }
namespace dxgk::arg { struct mapcpuhostaperture_t;                          }
namespace dxgk::arg { struct openallocation_t;                              }
namespace dxgk::arg { struct patch_t;                                       }
namespace dxgk::arg { struct postmultiplaneoverlaypresent_t;                }
namespace dxgk::arg { struct preemptcommand_t;                              }
namespace dxgk::arg { struct present_t;                                     }
namespace dxgk::arg { struct queryadapterinfo_t;                            }
namespace dxgk::arg { struct queryconnectionchange_t;                       }
namespace dxgk::arg { struct querycurrentfence_t;                           }
namespace dxgk::arg { struct querydependentenginegroup_t;                   }
namespace dxgk::arg { struct querydiagnostictypessupport_t;                 }
namespace dxgk::arg { struct queryenginestatus_t;                           }
namespace dxgk::arg { struct queryvidpnhwcapability_t;                      }
namespace dxgk::arg { struct recommendfunctionalvidpn_t;                    }
namespace dxgk::arg { struct recommendmonitormodes_t;                       }
namespace dxgk::arg { struct recommendvidpntopology_t;                      }
namespace dxgk::arg { struct releaseswizzlingrange_t;                       }
namespace dxgk::arg { struct render_t;                                      }
namespace dxgk::arg { struct rendergdi_t;                                   }
namespace dxgk::arg { struct resetengine_t;                                 }
namespace dxgk::arg { struct resethwengine_t;                               }
namespace dxgk::arg { struct restorememoryforhotupdate_t;                   }
namespace dxgk::arg { struct resumecontext_t;                               }
namespace dxgk::arg { struct resumehwengine_t;                              }
namespace dxgk::arg { struct savememoryforhotupdate_t;                      }
namespace dxgk::arg { struct setcontextschedulingproperties_t;              }
namespace dxgk::arg { struct setdisplayprivatedriverformat_t;               }
namespace dxgk::arg { struct setpalette_t;                                  }
namespace dxgk::arg { struct setpointerposition_t;                          }
namespace dxgk::arg { struct setpointershape_t;                             }
namespace dxgk::arg { struct setrootpagetable_t;                            }
namespace dxgk::arg { struct setschedulinglogbuffer_t;                      }
namespace dxgk::arg { struct setstablepowerstate_t;                         }
namespace dxgk::arg { struct settargetadjustedcolorimetry2_t;               }
namespace dxgk::arg { struct settargetanalogcopyprotection_t;               }
namespace dxgk::arg { struct settargetcontenttype_t;                        }
namespace dxgk::arg { struct settargetgamma_t;                              }
namespace dxgk::arg { struct settimingsfromvidpn_t;                         }
namespace dxgk::arg { struct settrackedworkloadpowerlevel_t;                }
namespace dxgk::arg { struct setupprioritybands_t;                          }
namespace dxgk::arg { struct setvideoprotectedregion_t;                     }
namespace dxgk::arg { struct setvidpnsourceaddress_t;                       }
namespace dxgk::arg { struct setvidpnsourceaddresswithmultiplaneoverlay2_t; }
namespace dxgk::arg { struct setvidpnsourceaddresswithmultiplaneoverlay3_t; }
namespace dxgk::arg { struct setvidpnsourceaddresswithmultiplaneoverlay_t;  }
namespace dxgk::arg { struct setvidpnsourcevisibility_t;                    }
namespace dxgk::arg { struct setvirtualmachinedata_t;                       }
namespace dxgk::arg { struct signalmonitoredfence_t;                        }
namespace dxgk::arg { struct stopcapture_t;                                 }
namespace dxgk::arg { struct submitcommand_t;                               }
namespace dxgk::arg { struct submitcommandtohwqueue_t;                      }
namespace dxgk::arg { struct submitcommandvirtual_t;                        }
namespace dxgk::arg { struct suspendcontext_t;                              }
namespace dxgk::arg { struct switchtohwcontextlist_t;                       }
namespace dxgk::arg { struct system_display_enable_flags_t;                 }
namespace dxgk::arg { struct unmapcpuhostaperture_t;                        }
namespace dxgk::arg { struct updateactivevidpnpresentpath_t;                }
namespace dxgk::arg { struct updatehwcontextstate_t;                        }
namespace dxgk::arg { struct updatemonitorlinkinfo_t;                       }
namespace dxgk::arg { struct updateoverlay_t;                               }
namespace dxgk::arg { struct validatesubmitcommand_t;                       }
namespace dxgk::arg { struct validateupdateallocproperty_t;                 }
namespace video     { struct request_packet_t;                              }

#include "magic/driver_initialization_data_t.start.hpp"
namespace nt
{
    struct guid_t;
    struct device_object_t;
    struct linked_device_t;
    struct query_interface_t;
    struct dxgkrnl_interface_t;

    // [struct _DRIVER_INITIALIZATION_DATA]
    // => WDK 10 (NV)
    //
    struct driver_initialization_data_t                                                                                                    
    {                                                                                                                                      
        enum class u0_dxgk_ddi_set_power_state_t : int32_t                                                                                 
        {                                                                                                                                  
            none =           0x0,                                                                                                            // WDK 10
            reserved =       0x1,                                                                                                            // WDK 10
            sleep =          0x2,                                                                                                            // WDK 10
            hibernate =      0x3,                                                                                                            // WDK 10
            shutdown =       0x4,                                                                                                            // WDK 10
            shutdown_reset = 0x5,                                                                                                            // WDK 10
            shutdown_off =   0x6,                                                                                                            // WDK 10
            warm_eject =     0x7,                                                                                                            // WDK 10
            display_off =    0x8,                                                                                                            // WDK 10
        };                                                                                                                                 
                                                                                                                                           
        using pdxgkddi_add_device_t =                                          sdk::function<int32_t(const struct nt::device_object_t*, void**)>*;                                                             
        using pdxgkddi_start_device_t =                                        sdk::function<int32_t(const void*, struct dxgk::start_info_t*, struct nt::dxgkrnl_interface_t*, uint32_t*, uint32_t*)>*;                                                             
        using pdxgkddi_dispatch_io_request_t =                                 sdk::function<int32_t(const void*, uint32_t, struct video::request_packet_t*)>*;                                                             
        using pdxgkddi_query_child_relations_t =                               sdk::function<int32_t(const void*, struct dxgk::child_descriptor_t*, uint32_t)>*;                                                             
        using pdxgkddi_query_child_status_t =                                  sdk::function<int32_t(const void*, struct dxgk::child_status_t*, uint8_t)>*;                                                             
        using pdxgkddi_query_device_descriptor_t =                             sdk::function<int32_t(const void*, uint32_t, struct dxgk::device_descriptor_t*)>*;                                                             
        using pdxgkddi_set_power_state_t =                                     sdk::function<int32_t(const void*, uint32_t, enum nt::device_power_state_t, enum )>*;                                                             
        using pdxgkddi_notify_acpi_event_t =                                   sdk::function<int32_t(const void*, enum dxgk::event_type_t, uint32_t, void*, uint32_t*)>*;                                                             
        using pdxgkddi_query_interface_t =                                     sdk::function<int32_t(const void*, struct nt::query_interface_t*)>*;                                                             
        using pdxgkddi_queryadapterinfo_t =                                    sdk::function<int32_t(const void*, const struct dxgk::arg::queryadapterinfo_t*)>*;                                                             
        using pdxgkddi_createdevice_t =                                        sdk::function<int32_t(const void*, struct dxgk::arg::createdevice_t*)>*;                                                             
        using pdxgkddi_createallocation_t =                                    sdk::function<int32_t(const void*, struct dxgk::arg::createallocation_t*)>*;                                                             
        using pdxgkddi_destroyallocation_t =                                   sdk::function<int32_t(const void*, const struct dxgk::arg::destroyallocation_t*)>*;                                                             
        using pdxgkddi_describeallocation_t =                                  sdk::function<int32_t(const void*, struct dxgk::arg::describeallocation_t*)>*;                                                             
        using pdxgkddi_getstandardallocationdriverdata_t =                     sdk::function<int32_t(const void*, struct dxgk::arg::getstandardallocationdriverdata_t*)>*;                                                             
        using pdxgkddi_acquireswizzlingrange_t =                               sdk::function<int32_t(const void*, struct dxgk::arg::acquireswizzlingrange_t*)>*;                                                             
        using pdxgkddi_releaseswizzlingrange_t =                               sdk::function<int32_t(const void*, const struct dxgk::arg::releaseswizzlingrange_t*)>*;                                                             
        using pdxgkddi_patch_t =                                               sdk::function<int32_t(const void*, const struct dxgk::arg::patch_t*)>*;                                                             
        using pdxgkddi_submitcommand_t =                                       sdk::function<int32_t(const void*, const struct dxgk::arg::submitcommand_t*)>*;                                                             
        using pdxgkddi_preemptcommand_t =                                      sdk::function<int32_t(const void*, const struct dxgk::arg::preemptcommand_t*)>*;                                                             
        using pdxgkddi_buildpagingbuffer_t =                                   sdk::function<int32_t(const void*, struct dxgk::arg::buildpagingbuffer_t*)>*;                                                             
        using pdxgkddi_setpalette_t =                                          sdk::function<int32_t(const void*, const struct dxgk::arg::setpalette_t*)>*;                                                             
        using pdxgkddi_setpointerposition_t =                                  sdk::function<int32_t(const void*, const struct dxgk::arg::setpointerposition_t*)>*;                                                             
        using pdxgkddi_setpointershape_t =                                     sdk::function<int32_t(const void*, const struct dxgk::arg::setpointershape_t*)>*;                                                             
        using pdxgkddi_escape_t =                                              sdk::function<int32_t(const void*, const struct dxgk::arg::escape_t*)>*;                                                             
        using pdxgkddi_collectdbginfo_t =                                      sdk::function<int32_t(const void*, const struct dxgk::arg::collectdbginfo_t*)>*;                                                             
        using pdxgkddi_querycurrentfence_t =                                   sdk::function<int32_t(const void*, struct dxgk::arg::querycurrentfence_t*)>*;                                                             
        using pdxgkddi_issupportedvidpn_t =                                    sdk::function<int32_t(const void*, struct dxgk::arg::issupportedvidpn_t*)>*;                                                             
        using pdxgkddi_recommendfunctionalvidpn_t =                            sdk::function<int32_t(const void*, const struct dxgk::arg::recommendfunctionalvidpn_t const*)>*;                                                             
        using pdxgkddi_enumvidpncofuncmodality_t =                             sdk::function<int32_t(const void*, const struct dxgk::arg::enumvidpncofuncmodality_t const*)>*;                                                             
        using pdxgkddi_setvidpnsourceaddress_t =                               sdk::function<int32_t(const void*, const struct dxgk::arg::setvidpnsourceaddress_t*)>*;                                                             
        using pdxgkddi_setvidpnsourcevisibility_t =                            sdk::function<int32_t(const void*, const struct dxgk::arg::setvidpnsourcevisibility_t*)>*;                                                             
        using pdxgkddi_commitvidpn_t =                                         sdk::function<int32_t(const void*, const struct dxgk::arg::commitvidpn_t const*)>*;                                                             
        using pdxgkddi_updateactivevidpnpresentpath_t =                        sdk::function<int32_t(const void*, const struct dxgk::arg::updateactivevidpnpresentpath_t const*)>*;                                                             
        using pdxgkddi_recommendmonitormodes_t =                               sdk::function<int32_t(const void*, const struct dxgk::arg::recommendmonitormodes_t const*)>*;                                                             
        using pdxgkddi_recommendvidpntopology_t =                              sdk::function<int32_t(const void*, const struct dxgk::arg::recommendvidpntopology_t const*)>*;                                                             
        using pdxgkddi_getscanline_t =                                         sdk::function<int32_t(const void*, struct dxgk::arg::getscanline_t*)>*;                                                             
        using pdxgkddi_stopcapture_t =                                         sdk::function<int32_t(const void*, const struct dxgk::arg::stopcapture_t*)>*;                                                             
        using pdxgkddi_controlinterrupt_t =                                    sdk::function<int32_t(const void*, const enum dxgk::interrupt_type_t, uint8_t)>*;                                                             
        using pdxgkddi_createoverlay_t =                                       sdk::function<int32_t(const void*, struct dxgk::arg::createoverlay_t*)>*;                                                             
        using pdxgkddi_openallocationinfo_t =                                  sdk::function<int32_t(const void*, const struct dxgk::arg::openallocation_t*)>*;                                                             
        using pdxgkddi_closeallocation_t =                                     sdk::function<int32_t(const void*, const struct dxgk::arg::closeallocation_t*)>*;                                                             
        using pdxgkddi_render_t =                                              sdk::function<int32_t(const void*, struct dxgk::arg::render_t*)>*;                                                             
        using dxgk_ddi_present_t =                                             sdk::function<int32_t(const void*, struct dxgk::arg::present_t*)>*;                                                             
        using pdxgkddi_updateoverlay_t =                                       sdk::function<int32_t(const void*, const struct dxgk::arg::updateoverlay_t*)>*;                                                             
        using pdxgkddi_flipoverlay_t =                                         sdk::function<int32_t(const void*, const struct dxgk::arg::flipoverlay_t*)>*;                                                             
        using pdxgkddi_createcontext_t =                                       sdk::function<int32_t(const void*, struct dxgk::arg::createcontext_t*)>*;                                                             
        using pdxgkddi_link_device_t =                                         sdk::function<int32_t(const struct nt::device_object_t*, const void*, struct nt::linked_device_t*)>*;                                                             
        using pdxgkddi_setdisplayprivatedriverformat_t =                       sdk::function<int32_t(const void*, struct dxgk::arg::setdisplayprivatedriverformat_t*)>*;                                                             
        using pdxgkddi_render_t =                                              sdk::function<int32_t(const void*, struct dxgk::arg::render_t*)>*;                                                             
        using pdxgkddi_queryvidpnhwcapability_t =                              sdk::function<int32_t(const void*, struct dxgk::arg::queryvidpnhwcapability_t*)>*;                                                             
        using dxgk_ddi_set_power_component_f_state_t =                         sdk::function<int32_t(const void*, uint32_t, uint32_t)>*;                                                             
        using pdxgkddi_querydependentenginegroup_t =                           sdk::function<int32_t(const void*, struct dxgk::arg::querydependentenginegroup_t*)>*;                                                             
        using pdxgkddi_queryenginestatus_t =                                   sdk::function<int32_t(const void*, struct dxgk::arg::queryenginestatus_t*)>*;                                                             
        using pdxgkddi_resetengine_t =                                         sdk::function<int32_t(const void*, struct dxgk::arg::resetengine_t*)>*;                                                             
        using pdxgkddi_stop_device_and_release_post_display_ownership_t =      sdk::function<int32_t(void*, uint32_t, struct dxgk::display_information_t*)>*;                                                             
        using dxgk_ddi_stop_device_and_release_post_display_ownership_t =      pdxgkddi_stop_device_and_release_post_display_ownership_t ;                                                             
        using pdxgkddi_system_display_enable_t =                               sdk::function<int32_t(void*, uint32_t, struct dxgk::arg::system_display_enable_flags_t*, uint32_t*, uint32_t*, enum kuser::d3dddiformat_t*)>*;                                                             
        using pdxgkddi_system_display_write_t =                                sdk::function<void(void*, void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)>*;                                                             
        using pdxgkddi_cancelcommand_t =                                       sdk::function<int32_t(const void*, const struct dxgk::arg::cancelcommand_t*)>*;                                                             
        using pdxgkddi_get_child_container_id_t =                              sdk::function<int32_t(void*, uint32_t, struct dxgk::child_container_id_t*)>*;                                                             
        using dxgk_ddi_power_runtime_control_request_t =                       sdk::function<int32_t(const void*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*;                                                             
        using pdxgkddi_setvidpnsourceaddresswithmultiplaneoverlay_t =          sdk::function<int32_t(const void*, const struct dxgk::arg::setvidpnsourceaddresswithmultiplaneoverlay_t*)>*;                                                             
        using dxgk_ddi_set_vid_pn_source_address_with_multi_plane_overlay_t =  pdxgkddi_setvidpnsourceaddresswithmultiplaneoverlay_t ;                                                             
        using pdxgkddi_notify_surprise_removal_t =                             sdk::function<int32_t(void*, enum dxgk::surprise_removal_type_t)>*;                                                             
        using pdxgkddi_getnodemetadata_t =                                     sdk::function<int32_t(const void*, uint32_t, struct dxgk::nodemetadata_t*)>*;                                                             
        using dxgk_ddi_set_power_p_state_t =                                   sdk::function<int32_t(const void*, uint32_t, uint32_t)>*;                                                             
        using pdxgkddi_controlinterrupt2_t =                                   sdk::function<int32_t(const void*, const struct dxgk::arg::controlinterrupt2_t)>*;                                                             
        using pdxgkddi_checkmultiplaneoverlaysupport_t =                       sdk::function<int32_t(const void*, struct dxgk::arg::checkmultiplaneoverlaysupport_t*)>*;                                                             
        using pdxgkddi_calibrategpuclock_t =                                   sdk::function<int32_t(const void*, uint32_t, uint32_t, struct dxgk::gpuclockdata_t*)>*;                                                             
        using pdxgkddi_formathistorybuffer_t =                                 sdk::function<int32_t(const void*, struct dxgk::arg::formathistorybuffer_t*)>*;                                                             
        using pdxgkddi_rendergdi_t =                                           sdk::function<int32_t(const void*, struct dxgk::arg::rendergdi_t*)>*;                                                             
        using pdxgkddi_submitcommandvirtual_t =                                sdk::function<int32_t(const void*, const struct dxgk::arg::submitcommandvirtual_t*)>*;                                                             
        using pdxgkddi_setrootpagetable_t =                                    sdk::function<void(const void*, const struct dxgk::arg::setrootpagetable_t*)>*;                                                             
        using pdxgkddi_getrootpagetablesize_t =                                sdk::function<uint64_t(const void*, struct dxgk::arg::getrootpagetablesize_t*)>*;                                                             
        using pdxgkddi_mapcpuhostaperture_t =                                  sdk::function<int32_t(const void*, const struct dxgk::arg::mapcpuhostaperture_t*)>*;                                                             
        using pdxgkddi_unmapcpuhostaperture_t =                                sdk::function<int32_t(const void*, const struct dxgk::arg::unmapcpuhostaperture_t*)>*;                                                             
        using pdxgkddi_checkmultiplaneoverlaysupport2_t =                      sdk::function<int32_t(const void*, struct dxgk::arg::checkmultiplaneoverlaysupport2_t*)>*;                                                             
        using pdxgkddi_createprocess_t =                                       sdk::function<int32_t(const void*, struct dxgk::arg::createprocess_t*)>*;                                                             
        using dxgk_ddi_destroy_process_t =                                     sdk::function<int32_t(const void*, const void*)>*;                                                             
        using pdxgkddi_setvidpnsourceaddresswithmultiplaneoverlay2_t =         sdk::function<int32_t(const void*, const struct dxgk::arg::setvidpnsourceaddresswithmultiplaneoverlay2_t*)>*;                                                             
        using dxgk_ddi_set_vid_pn_source_address_with_multi_plane_overlay2_t = pdxgkddi_setvidpnsourceaddresswithmultiplaneoverlay2_t ;                                                             
        using pdxgkddi_setstablepowerstate_t =                                 sdk::function<void(const void*, const struct dxgk::arg::setstablepowerstate_t*)>*;                                                             
        using pdxgkddi_setvideoprotectedregion_t =                             sdk::function<int32_t(const void*, const struct dxgk::arg::setvideoprotectedregion_t*)>*;                                                             
        using pdxgkddi_checkmultiplaneoverlaysupport3_t =                      sdk::function<int32_t(const void*, struct dxgk::arg::checkmultiplaneoverlaysupport3_t*)>*;                                                             
        using pdxgkddi_setvidpnsourceaddresswithmultiplaneoverlay3_t =         sdk::function<int32_t(const void*, struct dxgk::arg::setvidpnsourceaddresswithmultiplaneoverlay3_t*)>*;                                                             
        using dxgk_ddi_set_vid_pn_source_address_with_multi_plane_overlay3_t = pdxgkddi_setvidpnsourceaddresswithmultiplaneoverlay3_t ;                                                             
        using pdxgkddi_postmultiplaneoverlaypresent_t =                        sdk::function<int32_t(const void*, const struct dxgk::arg::postmultiplaneoverlaypresent_t*)>*;                                                             
        using pdxgkddi_validateupdateallocationproperty_t =                    sdk::function<int32_t(const void*, const struct dxgk::arg::validateupdateallocproperty_t*)>*;                                                             
        using pdxgkddi_controlmodebehavior_t =                                 sdk::function<int32_t(const void*, struct dxgk::arg::controlmodebehavior_t*)>*;                                                             
        using pdxgkddi_updatemonitorlinkinfo_t =                               sdk::function<int32_t(const void*, struct dxgk::arg::updatemonitorlinkinfo_t*)>*;                                                             
        using pdxgkddi_createhwcontext_t =                                     sdk::function<int32_t(const void*, struct dxgk::arg::createhwcontext_t*)>*;                                                             
        using pdxgkddi_createhwqueue_t =                                       sdk::function<int32_t(const void*, struct dxgk::arg::createhwqueue_t*)>*;                                                             
        using pdxgkddi_submitcommandtohwqueue_t =                              sdk::function<int32_t(const void*, const struct dxgk::arg::submitcommandtohwqueue_t*)>*;                                                             
        using pdxgkddi_switchtohwcontextlist_t =                               sdk::function<int32_t(const void*, const struct dxgk::arg::switchtohwcontextlist_t*)>*;                                                             
        using pdxgkddi_resethwengine_t =                                       sdk::function<int32_t(const void*, struct dxgk::arg::resethwengine_t*)>*;                                                             
        using pdxgkddi_createperiodicframenotification_t =                     sdk::function<int32_t(struct dxgk::arg::createperiodicframenotification_t*)>*;                                                             
        using pdxgkddi_destroyperiodicframenotification_t =                    sdk::function<int32_t(const struct dxgk::arg::destroyperiodicframenotification_t*)>*;                                                             
        using pdxgkddi_settimingsfromvidpn_t =                                 sdk::function<int32_t(const void*, struct dxgk::arg::settimingsfromvidpn_t*)>*;                                                             
        using pdxgkddi_settargetgamma_t =                                      sdk::function<int32_t(const void*, const struct dxgk::arg::settargetgamma_t*)>*;                                                             
        using pdxgkddi_settargetcontenttype_t =                                sdk::function<int32_t(const void*, const struct dxgk::arg::settargetcontenttype_t*)>*;                                                             
        using pdxgkddi_settargetanalogcopyprotection_t =                       sdk::function<int32_t(const void*, const struct dxgk::arg::settargetanalogcopyprotection_t*)>*;                                                             
        using pdxgkddi_settargetadjustedcolorimetry_t =                        sdk::function<int32_t(const void*, uint32_t, struct dxgk::colorimetry_t)>*;                                                             
        using pdxgkddi_displaydetectcontrol_t =                                sdk::function<int32_t(const void*, const struct dxgk::arg::displaydetectcontrol_t*)>*;                                                             
        using pdxgkddi_queryconnectionchange_t =                               sdk::function<int32_t(const void*, struct dxgk::arg::queryconnectionchange_t*)>*;                                                             
        using pdxgkddi_exchangeprestartinfo_t =                                sdk::function<int32_t(const void*, struct dxgk::pre_start_info_t*)>*;                                                             
        using pdxgkddi_getmultiplaneoverlaycaps_t =                            sdk::function<int32_t(const void*, struct dxgk::arg::getmultiplaneoverlaycaps_t*)>*;                                                             
        using pdxgkddi_getpostcompositioncaps_t =                              sdk::function<int32_t(const void*, struct dxgk::arg::getpostcompositioncaps_t*)>*;                                                             
        using pdxgkddi_updatehwcontextstate_t =                                sdk::function<int32_t(const void*, const struct dxgk::arg::updatehwcontextstate_t*)>*;                                                             
        using pdxgkddi_createprotectedsession_t =                              sdk::function<int32_t(const void*, struct dxgk::arg::createprotectedsession_t*)>*;                                                             
        using dxgk_ddi_destroy_protected_session_t =                           sdk::function<int32_t(const void*, const void*)>*;                                                             
        using pdxgkddi_setschedulinglogbuffer_t =                              sdk::function<int32_t(const void*, const struct dxgk::arg::setschedulinglogbuffer_t*)>*;                                                             
        using pdxgkddi_setupprioritybands_t =                                  sdk::function<int32_t(const void*, const struct dxgk::arg::setupprioritybands_t*)>*;                                                             
        using pdxgkddi_setcontextschedulingproperties_t =                      sdk::function<int32_t(const void*, const struct dxgk::arg::setcontextschedulingproperties_t*)>*;                                                             
        using pdxgkddi_suspendcontext_t =                                      sdk::function<int32_t(const void*, const struct dxgk::arg::suspendcontext_t*)>*;                                                             
        using pdxgkddi_resumecontext_t =                                       sdk::function<int32_t(const void*, const struct dxgk::arg::resumecontext_t*)>*;                                                             
        using pdxgkddi_setvirtualmachinedata_t =                               sdk::function<int32_t(const void*, const struct dxgk::arg::setvirtualmachinedata_t*)>*;                                                             
        using pdxgkddi_beginexclusiveaccess_t =                                sdk::function<int32_t(const void*, struct dxgk::arg::beginexclusiveaccess_t*)>*;                                                             
        using pdxgkddi_endexclusiveaccess_t =                                  sdk::function<int32_t(const void*, struct dxgk::arg::endexclusiveaccess_t*)>*;                                                             
        using pdxgkddi_querydiagnostictypessupport_t =                         sdk::function<int32_t(const void*, struct dxgk::arg::querydiagnostictypessupport_t*)>*;                                                             
        using pdxgkddi_controldiagnosticreporting_t =                          sdk::function<int32_t(const void*, struct dxgk::arg::controldiagnosticreporting_t*)>*;                                                             
        using pdxgkddi_resumehwengine_t =                                      sdk::function<int32_t(const void*, struct dxgk::arg::resumehwengine_t*)>*;                                                             
        using pdxgkddi_signalmonitoredfence_t =                                sdk::function<int32_t(const void*, struct dxgk::arg::signalmonitoredfence_t*)>*;                                                             
        using dxgk_ddi_present_to_hw_queue_t =                                 sdk::function<int32_t(const void*, struct dxgk::arg::present_t*)>*;                                                             
        using pdxgkddi_validatesubmitcommand_t =                               sdk::function<int32_t(const void*, struct dxgk::arg::validatesubmitcommand_t*)>*;                                                             
        using pdxgkddi_settargetadjustedcolorimetry2_t =                       sdk::function<int32_t(const void*, struct dxgk::arg::settargetadjustedcolorimetry2_t*)>*;                                                             
        using pdxgkddi_settrackedworkloadpowerlevel_t =                        sdk::function<int32_t(const void*, struct dxgk::arg::settrackedworkloadpowerlevel_t*)>*;                                                             
        using pdxgkddi_savememoryforhotupdate_t =                              sdk::function<int32_t(const void*, const struct dxgk::arg::savememoryforhotupdate_t*)>*;                                                             
        using pdxgkddi_restorememoryforhotupdate_t =                           sdk::function<int32_t(const void*, const struct dxgk::arg::restorememoryforhotupdate_t*)>*;                                                             
        using pdxgkddi_collectdiagnosticinfo_t =                               sdk::function<int32_t(const struct nt::device_object_t*, struct dxgk::arg::collectdiagnosticinfo_t*)>*;                                                             
        using pdxgkddi_controlinterrupt3_t =                                   sdk::function<int32_t(const void*, const struct dxgk::arg::controlinterrupt3_t*)>*;                                                             
                                                                                                                                           
        // WDK 10                                                                                                                          
        //                                                                                                                                 
        _m000 uint32_t                                                        version;                                                       //{ +0x0000    } | .Version
        _m001 pdxgkddi_add_device_t                                           dxgk_ddi_add_device;                                           //{ +0x0008    } | .DxgkDdiAddDevice
        _m002 pdxgkddi_start_device_t                                         dxgk_ddi_start_device;                                         //{ +0x0010    } | .DxgkDdiStartDevice
        _m003 sdk::function<int32_t(const void*)>*                            dxgk_ddi_stop_device;                                          //{ +0x0018    } | .DxgkDdiStopDevice
        _m004 sdk::function<int32_t(const void*)>*                            dxgk_ddi_remove_device;                                        //{ +0x0020    } | .DxgkDdiRemoveDevice
        _m005 pdxgkddi_dispatch_io_request_t                                  dxgk_ddi_dispatch_io_request;                                  //{ +0x0028    } | .DxgkDdiDispatchIoRequest
        _m006 sdk::function<uint8_t(const void*, uint32_t)>*                  dxgk_ddi_interrupt_routine;                                    //{ +0x0030    } | .DxgkDdiInterruptRoutine
        _m007 sdk::function<void(const void*)>*                               dxgk_ddi_dpc_routine;                                          //{ +0x0038    } | .DxgkDdiDpcRoutine
        _m008 pdxgkddi_query_child_relations_t                                dxgk_ddi_query_child_relations;                                //{ +0x0040    } | .DxgkDdiQueryChildRelations
        _m009 pdxgkddi_query_child_status_t                                   dxgk_ddi_query_child_status;                                   //{ +0x0048    } | .DxgkDdiQueryChildStatus
        _m010 pdxgkddi_query_device_descriptor_t                              dxgk_ddi_query_device_descriptor;                              //{ +0x0050    } | .DxgkDdiQueryDeviceDescriptor
        _m011 pdxgkddi_set_power_state_t                                      dxgk_ddi_set_power_state;                                      //{ +0x0058    } | .DxgkDdiSetPowerState
        _m012 pdxgkddi_notify_acpi_event_t                                    dxgk_ddi_notify_acpi_event;                                    //{ +0x0060    } | .DxgkDdiNotifyAcpiEvent
        _m013 sdk::function<void(const void*)>*                               dxgk_ddi_reset_device;                                         //{ +0x0068    } | .DxgkDdiResetDevice
        _m014 sdk::function<void()>*                                          dxgk_ddi_unload;                                               //{ +0x0070    } | .DxgkDdiUnload
        _m015 pdxgkddi_query_interface_t                                      dxgk_ddi_query_interface;                                      //{ +0x0078    } | .DxgkDdiQueryInterface
        _m016 sdk::function<void(uint8_t, uint32_t, uint8_t)>*                dxgk_ddi_control_etw_logging;                                  //{ +0x0080    } | .DxgkDdiControlEtwLogging
        _m017 pdxgkddi_queryadapterinfo_t                                     dxgk_ddi_query_adapter_info;                                   //{ +0x0088    } | .DxgkDdiQueryAdapterInfo
        _m018 pdxgkddi_createdevice_t                                         dxgk_ddi_create_device;                                        //{ +0x0090    } | .DxgkDdiCreateDevice
        _m019 pdxgkddi_createallocation_t                                     dxgk_ddi_create_allocation;                                    //{ +0x0098    } | .DxgkDdiCreateAllocation
        _m020 pdxgkddi_destroyallocation_t                                    dxgk_ddi_destroy_allocation;                                   //{ +0x00a0    } | .DxgkDdiDestroyAllocation
        _m021 pdxgkddi_describeallocation_t                                   dxgk_ddi_describe_allocation;                                  //{ +0x00a8    } | .DxgkDdiDescribeAllocation
        _m022 pdxgkddi_getstandardallocationdriverdata_t                      dxgk_ddi_get_standard_allocation_driver_data;                  //{ +0x00b0    } | .DxgkDdiGetStandardAllocationDriverData
        _m023 pdxgkddi_acquireswizzlingrange_t                                dxgk_ddi_acquire_swizzling_range;                              //{ +0x00b8    } | .DxgkDdiAcquireSwizzlingRange
        _m024 pdxgkddi_releaseswizzlingrange_t                                dxgk_ddi_release_swizzling_range;                              //{ +0x00c0    } | .DxgkDdiReleaseSwizzlingRange
        _m025 pdxgkddi_patch_t                                                dxgk_ddi_patch;                                                //{ +0x00c8    } | .DxgkDdiPatch
        _m026 pdxgkddi_submitcommand_t                                        dxgk_ddi_submit_command;                                       //{ +0x00d0    } | .DxgkDdiSubmitCommand
        _m027 pdxgkddi_preemptcommand_t                                       dxgk_ddi_preempt_command;                                      //{ +0x00d8    } | .DxgkDdiPreemptCommand
        _m028 pdxgkddi_buildpagingbuffer_t                                    dxgk_ddi_build_paging_buffer;                                  //{ +0x00e0    } | .DxgkDdiBuildPagingBuffer
        _m029 pdxgkddi_setpalette_t                                           dxgk_ddi_set_palette;                                          //{ +0x00e8    } | .DxgkDdiSetPalette
        _m030 pdxgkddi_setpointerposition_t                                   dxgk_ddi_set_pointer_position;                                 //{ +0x00f0    } | .DxgkDdiSetPointerPosition
        _m031 pdxgkddi_setpointershape_t                                      dxgk_ddi_set_pointer_shape;                                    //{ +0x00f8    } | .DxgkDdiSetPointerShape
        _m032 sdk::function<int32_t(const void*)>*                            dxgk_ddi_reset_from_timeout;                                   //{ +0x0100    } | .DxgkDdiResetFromTimeout
        _m033 sdk::function<int32_t(const void*)>*                            dxgk_ddi_restart_from_timeout;                                 //{ +0x0108    } | .DxgkDdiRestartFromTimeout
        _m034 pdxgkddi_escape_t                                               dxgk_ddi_escape;                                               //{ +0x0110    } | .DxgkDdiEscape
        _m035 pdxgkddi_collectdbginfo_t                                       dxgk_ddi_collect_dbg_info;                                     //{ +0x0118    } | .DxgkDdiCollectDbgInfo
        _m036 pdxgkddi_querycurrentfence_t                                    dxgk_ddi_query_current_fence;                                  //{ +0x0120    } | .DxgkDdiQueryCurrentFence
        _m037 pdxgkddi_issupportedvidpn_t                                     dxgk_ddi_is_supported_vid_pn;                                  //{ +0x0128    } | .DxgkDdiIsSupportedVidPn
        _m038 pdxgkddi_recommendfunctionalvidpn_t                             dxgk_ddi_recommend_functional_vid_pn;                          //{ +0x0130    } | .DxgkDdiRecommendFunctionalVidPn
        _m039 pdxgkddi_enumvidpncofuncmodality_t                              dxgk_ddi_enum_vid_pn_cofunc_modality;                          //{ +0x0138    } | .DxgkDdiEnumVidPnCofuncModality
        _m040 pdxgkddi_setvidpnsourceaddress_t                                dxgk_ddi_set_vid_pn_source_address;                            //{ +0x0140    } | .DxgkDdiSetVidPnSourceAddress
        _m041 pdxgkddi_setvidpnsourcevisibility_t                             dxgk_ddi_set_vid_pn_source_visibility;                         //{ +0x0148    } | .DxgkDdiSetVidPnSourceVisibility
        _m042 pdxgkddi_commitvidpn_t                                          dxgk_ddi_commit_vid_pn;                                        //{ +0x0150    } | .DxgkDdiCommitVidPn
        _m043 pdxgkddi_updateactivevidpnpresentpath_t                         dxgk_ddi_update_active_vid_pn_present_path;                    //{ +0x0158    } | .DxgkDdiUpdateActiveVidPnPresentPath
        _m044 pdxgkddi_recommendmonitormodes_t                                dxgk_ddi_recommend_monitor_modes;                              //{ +0x0160    } | .DxgkDdiRecommendMonitorModes
        _m045 pdxgkddi_recommendvidpntopology_t                               dxgk_ddi_recommend_vid_pn_topology;                            //{ +0x0168    } | .DxgkDdiRecommendVidPnTopology
        _m046 pdxgkddi_getscanline_t                                          dxgk_ddi_get_scan_line;                                        //{ +0x0170    } | .DxgkDdiGetScanLine
        _m047 pdxgkddi_stopcapture_t                                          dxgk_ddi_stop_capture;                                         //{ +0x0178    } | .DxgkDdiStopCapture
        _m048 pdxgkddi_controlinterrupt_t                                     dxgk_ddi_control_interrupt;                                    //{ +0x0180    } | .DxgkDdiControlInterrupt
        _m049 pdxgkddi_createoverlay_t                                        dxgk_ddi_create_overlay;                                       //{ +0x0188    } | .DxgkDdiCreateOverlay
        _m050 sdk::function<int32_t(const void*)>*                            dxgk_ddi_destroy_device;                                       //{ +0x0190    } | .DxgkDdiDestroyDevice
        _m051 pdxgkddi_openallocationinfo_t                                   dxgk_ddi_open_allocation;                                      //{ +0x0198    } | .DxgkDdiOpenAllocation
        _m052 pdxgkddi_closeallocation_t                                      dxgk_ddi_close_allocation;                                     //{ +0x01a0    } | .DxgkDdiCloseAllocation
        _m053 pdxgkddi_render_t                                               dxgk_ddi_render;                                               //{ +0x01a8    } | .DxgkDdiRender
        _m054 dxgk_ddi_present_t                                              dxgk_ddi_present;                                              //{ +0x01b0    } | .DxgkDdiPresent
        _m055 pdxgkddi_updateoverlay_t                                        dxgk_ddi_update_overlay;                                       //{ +0x01b8    } | .DxgkDdiUpdateOverlay
        _m056 pdxgkddi_flipoverlay_t                                          dxgk_ddi_flip_overlay;                                         //{ +0x01c0    } | .DxgkDdiFlipOverlay
        _m057 sdk::function<int32_t(const void*)>*                            dxgk_ddi_destroy_overlay;                                      //{ +0x01c8    } | .DxgkDdiDestroyOverlay
        _m058 pdxgkddi_createcontext_t                                        dxgk_ddi_create_context;                                       //{ +0x01d0    } | .DxgkDdiCreateContext
        _m059 sdk::function<int32_t(const void*)>*                            dxgk_ddi_destroy_context;                                      //{ +0x01d8    } | .DxgkDdiDestroyContext
        _m060 pdxgkddi_link_device_t                                          dxgk_ddi_link_device;                                          //{ +0x01e0    } | .DxgkDdiLinkDevice
        _m061 pdxgkddi_setdisplayprivatedriverformat_t                        dxgk_ddi_set_display_private_driver_format;                    //{ +0x01e8    } | .DxgkDdiSetDisplayPrivateDriverFormat
        _m062 void*                                                           dxgk_ddi_describe_page_table;                                  //{ +0x01f0    } | .DxgkDdiDescribePageTable
        _m063 void*                                                           dxgk_ddi_update_page_table;                                    //{ +0x01f8    } | .DxgkDdiUpdatePageTable
        _m064 void*                                                           dxgk_ddi_update_page_directory;                                //{ +0x0200    } | .DxgkDdiUpdatePageDirectory
        _m065 void*                                                           dxgk_ddi_move_page_directory;                                  //{ +0x0208    } | .DxgkDdiMovePageDirectory
        _m066 void*                                                           dxgk_ddi_submit_render;                                        //{ +0x0210    } | .DxgkDdiSubmitRender
        _m067 void*                                                           dxgk_ddi_create_allocation2;                                   //{ +0x0218    } | .DxgkDdiCreateAllocation2
        _m068 pdxgkddi_render_t                                               dxgk_ddi_render_km;                                            //{ +0x0220    } | .DxgkDdiRenderKm
        _m069 pdxgkddi_queryvidpnhwcapability_t                               dxgk_ddi_query_vid_pn_hw_capability;                           //{ +0x0230    } | .DxgkDdiQueryVidPnHWCapability
        _m070 dxgk_ddi_set_power_component_f_state_t                          dxgk_ddi_set_power_component_f_state;                          //{ +0x0238    } | .DxgkDdiSetPowerComponentFState
        _m071 pdxgkddi_querydependentenginegroup_t                            dxgk_ddi_query_dependent_engine_group;                         //{ +0x0240    } | .DxgkDdiQueryDependentEngineGroup
        _m072 pdxgkddi_queryenginestatus_t                                    dxgk_ddi_query_engine_status;                                  //{ +0x0248    } | .DxgkDdiQueryEngineStatus
        _m073 pdxgkddi_resetengine_t                                          dxgk_ddi_reset_engine;                                         //{ +0x0250    } | .DxgkDdiResetEngine
        _m074 dxgk_ddi_stop_device_and_release_post_display_ownership_t       dxgk_ddi_stop_device_and_release_post_display_ownership;       //{ +0x0258    } | .DxgkDdiStopDeviceAndReleasePostDisplayOwnership
        _m075 pdxgkddi_system_display_enable_t                                dxgk_ddi_system_display_enable;                                //{ +0x0260    } | .DxgkDdiSystemDisplayEnable
        _m076 pdxgkddi_system_display_write_t                                 dxgk_ddi_system_display_write;                                 //{ +0x0268    } | .DxgkDdiSystemDisplayWrite
        _m077 pdxgkddi_cancelcommand_t                                        dxgk_ddi_cancel_command;                                       //{ +0x0270    } | .DxgkDdiCancelCommand
        _m078 pdxgkddi_get_child_container_id_t                               dxgk_ddi_get_child_container_id;                               //{ +0x0278    } | .DxgkDdiGetChildContainerId
        _m079 dxgk_ddi_power_runtime_control_request_t                        dxgk_ddi_power_runtime_control_request;                        //{ +0x0280    } | .DxgkDdiPowerRuntimeControlRequest
        _m080 dxgk_ddi_set_vid_pn_source_address_with_multi_plane_overlay_t   dxgk_ddi_set_vid_pn_source_address_with_multi_plane_overlay;   //{ +0x0288    } | .DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay
        _m081 pdxgkddi_notify_surprise_removal_t                              dxgk_ddi_notify_surprise_removal;                              //{ +0x0290    } | .DxgkDdiNotifySurpriseRemoval
        _m082 pdxgkddi_getnodemetadata_t                                      dxgk_ddi_get_node_metadata;                                    //{ +0x0298    } | .DxgkDdiGetNodeMetadata
        _m083 dxgk_ddi_set_power_p_state_t                                    dxgk_ddi_set_power_p_state;                                    //{ +0x02a0    } | .DxgkDdiSetPowerPState
        _m084 pdxgkddi_controlinterrupt2_t                                    dxgk_ddi_control_interrupt2;                                   //{ +0x02a8    } | .DxgkDdiControlInterrupt2
        _m085 pdxgkddi_checkmultiplaneoverlaysupport_t                        dxgk_ddi_check_multi_plane_overlay_support;                    //{ +0x02b0    } | .DxgkDdiCheckMultiPlaneOverlaySupport
        _m086 pdxgkddi_calibrategpuclock_t                                    dxgk_ddi_calibrate_gpu_clock;                                  //{ +0x02b8    } | .DxgkDdiCalibrateGpuClock
        _m087 pdxgkddi_formathistorybuffer_t                                  dxgk_ddi_format_history_buffer;                                //{ +0x02c0    } | .DxgkDdiFormatHistoryBuffer
        _m088 pdxgkddi_rendergdi_t                                            dxgk_ddi_render_gdi;                                           //{ +0x02c8    } | .DxgkDdiRenderGdi
        _m089 pdxgkddi_submitcommandvirtual_t                                 dxgk_ddi_submit_command_virtual;                               //{ +0x02d0    } | .DxgkDdiSubmitCommandVirtual
        _m090 pdxgkddi_setrootpagetable_t                                     dxgk_ddi_set_root_page_table;                                  //{ +0x02d8    } | .DxgkDdiSetRootPageTable
        _m091 pdxgkddi_getrootpagetablesize_t                                 dxgk_ddi_get_root_page_table_size;                             //{ +0x02e0    } | .DxgkDdiGetRootPageTableSize
        _m092 pdxgkddi_mapcpuhostaperture_t                                   dxgk_ddi_map_cpu_host_aperture;                                //{ +0x02e8    } | .DxgkDdiMapCpuHostAperture
        _m093 pdxgkddi_unmapcpuhostaperture_t                                 dxgk_ddi_unmap_cpu_host_aperture;                              //{ +0x02f0    } | .DxgkDdiUnmapCpuHostAperture
        _m094 pdxgkddi_checkmultiplaneoverlaysupport2_t                       dxgk_ddi_check_multi_plane_overlay_support2;                   //{ +0x02f8    } | .DxgkDdiCheckMultiPlaneOverlaySupport2
        _m095 pdxgkddi_createprocess_t                                        dxgk_ddi_create_process;                                       //{ +0x0300    } | .DxgkDdiCreateProcess
        _m096 dxgk_ddi_destroy_process_t                                      dxgk_ddi_destroy_process;                                      //{ +0x0308    } | .DxgkDdiDestroyProcess
        _m097 dxgk_ddi_set_vid_pn_source_address_with_multi_plane_overlay2_t  dxgk_ddi_set_vid_pn_source_address_with_multi_plane_overlay2;  //{ +0x0310    } | .DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay2
        _m098 sdk::function<int32_t(const void*, void*)>*                     dxgk_ddi_power_runtime_set_device_handle;                      //{ +0x0328    } | .DxgkDdiPowerRuntimeSetDeviceHandle
        _m099 pdxgkddi_setstablepowerstate_t                                  dxgk_ddi_set_stable_power_state;                               //{ +0x0330    } | .DxgkDdiSetStablePowerState
        _m100 pdxgkddi_setvideoprotectedregion_t                              dxgk_ddi_set_video_protected_region;                           //{ +0x0338    } | .DxgkDdiSetVideoProtectedRegion
        _m101 pdxgkddi_checkmultiplaneoverlaysupport3_t                       dxgk_ddi_check_multi_plane_overlay_support3;                   //{ +0x0340    } | .DxgkDdiCheckMultiPlaneOverlaySupport3
        _m102 dxgk_ddi_set_vid_pn_source_address_with_multi_plane_overlay3_t  dxgk_ddi_set_vid_pn_source_address_with_multi_plane_overlay3;  //{ +0x0348    } | .DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay3
        _m103 pdxgkddi_postmultiplaneoverlaypresent_t                         dxgk_ddi_post_multi_plane_overlay_present;                     //{ +0x0350    } | .DxgkDdiPostMultiPlaneOverlayPresent
        _m104 pdxgkddi_validateupdateallocationproperty_t                     dxgk_ddi_validate_update_allocation_property;                  //{ +0x0358    } | .DxgkDdiValidateUpdateAllocationProperty
        _m105 pdxgkddi_controlmodebehavior_t                                  dxgk_ddi_control_mode_behavior;                                //{ +0x0360    } | .DxgkDdiControlModeBehavior
        _m106 pdxgkddi_updatemonitorlinkinfo_t                                dxgk_ddi_update_monitor_link_info;                             //{ +0x0368    } | .DxgkDdiUpdateMonitorLinkInfo
        _m107 pdxgkddi_createhwcontext_t                                      dxgk_ddi_create_hw_context;                                    //{ +0x0370    } | .DxgkDdiCreateHwContext
        _m108 sdk::function<int32_t(const void*)>*                            dxgk_ddi_destroy_hw_context;                                   //{ +0x0378    } | .DxgkDdiDestroyHwContext
        _m109 pdxgkddi_createhwqueue_t                                        dxgk_ddi_create_hw_queue;                                      //{ +0x0380    } | .DxgkDdiCreateHwQueue
        _m110 sdk::function<int32_t(const void*)>*                            dxgk_ddi_destroy_hw_queue;                                     //{ +0x0388    } | .DxgkDdiDestroyHwQueue
        _m111 pdxgkddi_submitcommandtohwqueue_t                               dxgk_ddi_submit_command_to_hw_queue;                           //{ +0x0390    } | .DxgkDdiSubmitCommandToHwQueue
        _m112 pdxgkddi_switchtohwcontextlist_t                                dxgk_ddi_switch_to_hw_context_list;                            //{ +0x0398    } | .DxgkDdiSwitchToHwContextList
        _m113 pdxgkddi_resethwengine_t                                        dxgk_ddi_reset_hw_engine;                                      //{ +0x03a0    } | .DxgkDdiResetHwEngine
        _m114 pdxgkddi_createperiodicframenotification_t                      dxgk_ddi_create_periodic_frame_notification;                   //{ +0x03a8    } | .DxgkDdiCreatePeriodicFrameNotification
        _m115 pdxgkddi_destroyperiodicframenotification_t                     dxgk_ddi_destroy_periodic_frame_notification;                  //{ +0x03b0    } | .DxgkDdiDestroyPeriodicFrameNotification
        _m116 pdxgkddi_settimingsfromvidpn_t                                  dxgk_ddi_set_timings_from_vid_pn;                              //{ +0x03b8    } | .DxgkDdiSetTimingsFromVidPn
        _m117 pdxgkddi_settargetgamma_t                                       dxgk_ddi_set_target_gamma;                                     //{ +0x03c0    } | .DxgkDdiSetTargetGamma
        _m118 pdxgkddi_settargetcontenttype_t                                 dxgk_ddi_set_target_content_type;                              //{ +0x03c8    } | .DxgkDdiSetTargetContentType
        _m119 pdxgkddi_settargetanalogcopyprotection_t                        dxgk_ddi_set_target_analog_copy_protection;                    //{ +0x03d0    } | .DxgkDdiSetTargetAnalogCopyProtection
        _m120 pdxgkddi_settargetadjustedcolorimetry_t                         dxgk_ddi_set_target_adjusted_colorimetry;                      //{ +0x03d8    } | .DxgkDdiSetTargetAdjustedColorimetry
        _m121 pdxgkddi_displaydetectcontrol_t                                 dxgk_ddi_display_detect_control;                               //{ +0x03e0    } | .DxgkDdiDisplayDetectControl
        _m122 pdxgkddi_queryconnectionchange_t                                dxgk_ddi_query_connection_change;                              //{ +0x03e8    } | .DxgkDdiQueryConnectionChange
        _m123 pdxgkddi_exchangeprestartinfo_t                                 dxgk_ddi_exchange_pre_start_info;                              //{ +0x03f0    } | .DxgkDdiExchangePreStartInfo
        _m124 pdxgkddi_getmultiplaneoverlaycaps_t                             dxgk_ddi_get_multi_plane_overlay_caps;                         //{ +0x03f8    } | .DxgkDdiGetMultiPlaneOverlayCaps
        _m125 pdxgkddi_getpostcompositioncaps_t                               dxgk_ddi_get_post_composition_caps;                            //{ +0x0400    } | .DxgkDdiGetPostCompositionCaps
        _m126 pdxgkddi_updatehwcontextstate_t                                 dxgk_ddi_update_hw_context_state;                              //{ +0x0408    } | .DxgkDdiUpdateHwContextState
        _m127 pdxgkddi_createprotectedsession_t                               dxgk_ddi_create_protected_session;                             //{ +0x0410    } | .DxgkDdiCreateProtectedSession
        _m128 dxgk_ddi_destroy_protected_session_t                            dxgk_ddi_destroy_protected_session;                            //{ +0x0418    } | .DxgkDdiDestroyProtectedSession
        _m129 pdxgkddi_setschedulinglogbuffer_t                               dxgk_ddi_set_scheduling_log_buffer;                            //{ +0x0420    } | .DxgkDdiSetSchedulingLogBuffer
        _m130 pdxgkddi_setupprioritybands_t                                   dxgk_ddi_setup_priority_bands;                                 //{ +0x0428    } | .DxgkDdiSetupPriorityBands
        _m131 sdk::function<int32_t(const void*)>*                            dxgk_ddi_notify_focus_present;                                 //{ +0x0430    } | .DxgkDdiNotifyFocusPresent
        _m132 pdxgkddi_setcontextschedulingproperties_t                       dxgk_ddi_set_context_scheduling_properties;                    //{ +0x0438    } | .DxgkDdiSetContextSchedulingProperties
        _m133 pdxgkddi_suspendcontext_t                                       dxgk_ddi_suspend_context;                                      //{ +0x0440    } | .DxgkDdiSuspendContext
        _m134 pdxgkddi_resumecontext_t                                        dxgk_ddi_resume_context;                                       //{ +0x0448    } | .DxgkDdiResumeContext
        _m135 pdxgkddi_setvirtualmachinedata_t                                dxgk_ddi_set_virtual_machine_data;                             //{ +0x0450    } | .DxgkDdiSetVirtualMachineData
        _m136 pdxgkddi_beginexclusiveaccess_t                                 dxgk_ddi_begin_exclusive_access;                               //{ +0x0458    } | .DxgkDdiBeginExclusiveAccess
        _m137 pdxgkddi_endexclusiveaccess_t                                   dxgk_ddi_end_exclusive_access;                                 //{ +0x0460    } | .DxgkDdiEndExclusiveAccess
        _m138 pdxgkddi_querydiagnostictypessupport_t                          dxgk_ddi_query_diagnostic_types_support;                       //{ +0x0468    } | .DxgkDdiQueryDiagnosticTypesSupport
        _m139 pdxgkddi_controldiagnosticreporting_t                           dxgk_ddi_control_diagnostic_reporting;                         //{ +0x0470    } | .DxgkDdiControlDiagnosticReporting
        _m140 pdxgkddi_resumehwengine_t                                       dxgk_ddi_resume_hw_engine;                                     //{ +0x0478    } | .DxgkDdiResumeHwEngine
        _m141 pdxgkddi_signalmonitoredfence_t                                 dxgk_ddi_signal_monitored_fence;                               //{ +0x0480    } | .DxgkDdiSignalMonitoredFence
        _m142 dxgk_ddi_present_to_hw_queue_t                                  dxgk_ddi_present_to_hw_queue;                                  //{ +0x0488    } | .DxgkDdiPresentToHwQueue
        _m143 pdxgkddi_validatesubmitcommand_t                                dxgk_ddi_validate_submit_command;                              //{ +0x0490    } | .DxgkDdiValidateSubmitCommand
        _m144 pdxgkddi_settargetadjustedcolorimetry2_t                        dxgk_ddi_set_target_adjusted_colorimetry2;                     //{ +0x0498    } | .DxgkDdiSetTargetAdjustedColorimetry2
        _m145 pdxgkddi_settrackedworkloadpowerlevel_t                         dxgk_ddi_set_tracked_workload_power_level;                     //{ +0x04a0    } | .DxgkDdiSetTrackedWorkloadPowerLevel
        _m146 pdxgkddi_savememoryforhotupdate_t                               dxgk_ddi_save_memory_for_hot_update;                           //{ +0x04a8    } | .DxgkDdiSaveMemoryForHotUpdate
        _m147 pdxgkddi_restorememoryforhotupdate_t                            dxgk_ddi_restore_memory_for_hot_update;                        //{ +0x04b0    } | .DxgkDdiRestoreMemoryForHotUpdate
        _m148 pdxgkddi_collectdiagnosticinfo_t                                dxgk_ddi_collect_diagnostic_info;                              //{ +0x04b8    } | .DxgkDdiCollectDiagnosticInfo
        _m149 pdxgkddi_controlinterrupt3_t                                    dxgk_ddi_control_interrupt3;                                   //{ +0x04c8    } | .DxgkDdiControlInterrupt3
                                                                                                                                           
        SDK_NONVOL_PROPERTIES( "_DRIVER_INITIALIZATION_DATA.$", 0x0, false, 0xf64bfb9a4cd82eff );                                                             
        SDK_FIXED_SIZE( driver_initialization_data_t, 0x4d0 );                                                                             
    };                                                                                                                                     
};
#include "magic/driver_initialization_data_t.end.hpp"
SDK_VERIFY( struct nt::driver_initialization_data_t, 0x4d0 );
