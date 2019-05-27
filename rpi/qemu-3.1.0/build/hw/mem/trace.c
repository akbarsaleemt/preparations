/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_MHP_PC_DIMM_ASSIGNED_SLOT_DSTATE;
uint16_t _TRACE_MEMORY_DEVICE_PRE_PLUG_DSTATE;
uint16_t _TRACE_MEMORY_DEVICE_PLUG_DSTATE;
uint16_t _TRACE_MEMORY_DEVICE_UNPLUG_DSTATE;
TraceEvent _TRACE_MHP_PC_DIMM_ASSIGNED_SLOT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mhp_pc_dimm_assigned_slot",
    .sstate = TRACE_MHP_PC_DIMM_ASSIGNED_SLOT_ENABLED,
    .dstate = &_TRACE_MHP_PC_DIMM_ASSIGNED_SLOT_DSTATE 
};
TraceEvent _TRACE_MEMORY_DEVICE_PRE_PLUG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "memory_device_pre_plug",
    .sstate = TRACE_MEMORY_DEVICE_PRE_PLUG_ENABLED,
    .dstate = &_TRACE_MEMORY_DEVICE_PRE_PLUG_DSTATE 
};
TraceEvent _TRACE_MEMORY_DEVICE_PLUG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "memory_device_plug",
    .sstate = TRACE_MEMORY_DEVICE_PLUG_ENABLED,
    .dstate = &_TRACE_MEMORY_DEVICE_PLUG_DSTATE 
};
TraceEvent _TRACE_MEMORY_DEVICE_UNPLUG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "memory_device_unplug",
    .sstate = TRACE_MEMORY_DEVICE_UNPLUG_ENABLED,
    .dstate = &_TRACE_MEMORY_DEVICE_UNPLUG_DSTATE 
};
TraceEvent *hw_mem_trace_events[] = {
    &_TRACE_MHP_PC_DIMM_ASSIGNED_SLOT_EVENT,
    &_TRACE_MEMORY_DEVICE_PRE_PLUG_EVENT,
    &_TRACE_MEMORY_DEVICE_PLUG_EVENT,
    &_TRACE_MEMORY_DEVICE_UNPLUG_EVENT,
  NULL,
};

static void trace_hw_mem_register_events(void)
{
    trace_event_register_group(hw_mem_trace_events);
}
trace_init(trace_hw_mem_register_events)
