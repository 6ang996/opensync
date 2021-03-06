/*
Copyright (c) 2015, Plume Design Inc. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
   1. Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
   2. Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
   3. Neither the name of the Plume Design Inc. nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL Plume Design Inc. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: object_manager.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "object_manager.pb-c.h"
void   object_manager__status__observation_point__init
                     (ObjectManager__Status__ObservationPoint         *message)
{
  static const ObjectManager__Status__ObservationPoint init_value = OBJECT_MANAGER__STATUS__OBSERVATION_POINT__INIT;
  *message = init_value;
}
size_t object_manager__status__observation_point__get_packed_size
                     (const ObjectManager__Status__ObservationPoint *message)
{
  assert(message->base.descriptor == &object_manager__status__observation_point__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t object_manager__status__observation_point__pack
                     (const ObjectManager__Status__ObservationPoint *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &object_manager__status__observation_point__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t object_manager__status__observation_point__pack_to_buffer
                     (const ObjectManager__Status__ObservationPoint *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &object_manager__status__observation_point__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ObjectManager__Status__ObservationPoint *
       object_manager__status__observation_point__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ObjectManager__Status__ObservationPoint *)
     protobuf_c_message_unpack (&object_manager__status__observation_point__descriptor,
                                allocator, len, data);
}
void   object_manager__status__observation_point__free_unpacked
                     (ObjectManager__Status__ObservationPoint *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &object_manager__status__observation_point__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   object_manager__status__object_status__init
                     (ObjectManager__Status__ObjectStatus         *message)
{
  static const ObjectManager__Status__ObjectStatus init_value = OBJECT_MANAGER__STATUS__OBJECT_STATUS__INIT;
  *message = init_value;
}
size_t object_manager__status__object_status__get_packed_size
                     (const ObjectManager__Status__ObjectStatus *message)
{
  assert(message->base.descriptor == &object_manager__status__object_status__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t object_manager__status__object_status__pack
                     (const ObjectManager__Status__ObjectStatus *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &object_manager__status__object_status__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t object_manager__status__object_status__pack_to_buffer
                     (const ObjectManager__Status__ObjectStatus *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &object_manager__status__object_status__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ObjectManager__Status__ObjectStatus *
       object_manager__status__object_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ObjectManager__Status__ObjectStatus *)
     protobuf_c_message_unpack (&object_manager__status__object_status__descriptor,
                                allocator, len, data);
}
void   object_manager__status__object_status__free_unpacked
                     (ObjectManager__Status__ObjectStatus *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &object_manager__status__object_status__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   object_manager__status__object_status_report__init
                     (ObjectManager__Status__ObjectStatusReport         *message)
{
  static const ObjectManager__Status__ObjectStatusReport init_value = OBJECT_MANAGER__STATUS__OBJECT_STATUS_REPORT__INIT;
  *message = init_value;
}
size_t object_manager__status__object_status_report__get_packed_size
                     (const ObjectManager__Status__ObjectStatusReport *message)
{
  assert(message->base.descriptor == &object_manager__status__object_status_report__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t object_manager__status__object_status_report__pack
                     (const ObjectManager__Status__ObjectStatusReport *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &object_manager__status__object_status_report__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t object_manager__status__object_status_report__pack_to_buffer
                     (const ObjectManager__Status__ObjectStatusReport *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &object_manager__status__object_status_report__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ObjectManager__Status__ObjectStatusReport *
       object_manager__status__object_status_report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ObjectManager__Status__ObjectStatusReport *)
     protobuf_c_message_unpack (&object_manager__status__object_status_report__descriptor,
                                allocator, len, data);
}
void   object_manager__status__object_status_report__free_unpacked
                     (ObjectManager__Status__ObjectStatusReport *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &object_manager__status__object_status_report__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor object_manager__status__observation_point__field_descriptors[2] =
{
  {
    "node_id",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(ObjectManager__Status__ObservationPoint, nodeid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "location_id",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(ObjectManager__Status__ObservationPoint, locationid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned object_manager__status__observation_point__field_indices_by_name[] = {
  1,   /* field[1] = locationId */
  0,   /* field[0] = nodeId */
};
static const ProtobufCIntRange object_manager__status__observation_point__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor object_manager__status__observation_point__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "object_manager.status.observation_point",
  "observation_point",
  "object_manager__status__observation_point",
  "object_manager.status",
  sizeof(ObjectManager__Status__ObservationPoint),
  2,
  object_manager__status__observation_point__field_descriptors,
  object_manager__status__observation_point__field_indices_by_name,
  1,  object_manager__status__observation_point__number_ranges,
  (ProtobufCMessageInit) object_manager__status__observation_point__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor object_manager__status__object_status__field_descriptors[3] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(ObjectManager__Status__ObjectStatus, objectname),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "version",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(ObjectManager__Status__ObjectStatus, version),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "status",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(ObjectManager__Status__ObjectStatus, status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned object_manager__status__object_status__field_indices_by_name[] = {
  0,   /* field[0] = objectName */
  2,   /* field[2] = status */
  1,   /* field[1] = version */
};
static const ProtobufCIntRange object_manager__status__object_status__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor object_manager__status__object_status__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "object_manager.status.object_status",
  "object_status",
  "object_manager__status__object_status",
  "object_manager.status",
  sizeof(ObjectManager__Status__ObjectStatus),
  3,
  object_manager__status__object_status__field_descriptors,
  object_manager__status__object_status__field_indices_by_name,
  1,  object_manager__status__object_status__number_ranges,
  (ProtobufCMessageInit) object_manager__status__object_status__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor object_manager__status__object_status_report__field_descriptors[3] =
{
  {
    "reported_at",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(ObjectManager__Status__ObjectStatusReport, has_reportedat),
    offsetof(ObjectManager__Status__ObjectStatusReport, reportedat),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "observation_point",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(ObjectManager__Status__ObjectStatusReport, observationpoint),
    &object_manager__status__observation_point__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "object_status",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(ObjectManager__Status__ObjectStatusReport, n_objectstatus),
    offsetof(ObjectManager__Status__ObjectStatusReport, objectstatus),
    &object_manager__status__object_status__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned object_manager__status__object_status_report__field_indices_by_name[] = {
  2,   /* field[2] = objectStatus */
  1,   /* field[1] = observationPoint */
  0,   /* field[0] = reportedAt */
};
static const ProtobufCIntRange object_manager__status__object_status_report__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor object_manager__status__object_status_report__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "object_manager.status.object_status_Report",
  "Object_status_report",
  "Object_manager__status__object_status_report",
  "object_manager.status",
  sizeof(ObjectManager__Status__ObjectStatusReport),
  3,
  object_manager__status__object_status_report__field_descriptors,
  object_manager__status__object_status_report__field_indices_by_name,
  1,  object_manager__status__object_status_report__number_ranges,
  (ProtobufCMessageInit) object_manager__status__object_status_report__init,
  NULL,NULL,NULL    /* reserved[123] */
};
