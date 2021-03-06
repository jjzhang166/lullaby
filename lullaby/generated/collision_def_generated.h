// Autogenerated code.  Do not edit.
#ifndef _LULLABY_LULLABY_GENERATED_COLLISION_DEF_GENERATED_H_
#define _LULLABY_LULLABY_GENERATED_COLLISION_DEF_GENERATED_H_

#include <type_traits>
#include <memory>
#include "flatbuffers/collision_def_generated.h"
#include "lullaby/util/color.h"
#include "lullaby/util/common_types.h"
#include "lullaby/util/math.h"
#include "lullaby/util/optional.h"
#include "lullaby/util/typeid.h"
#include "common_generated.h"

namespace lull {
class CollisionDefT;
class CollisionClipBoundsDefT;
class CollisionDefT {
 public:
  using FlatBufferType = CollisionDef;

  CollisionDefT() {}

  bool collision_on_exit = 0;
  bool interactive = 1;
  bool clip_outside_bounds = 0;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class CollisionClipBoundsDefT {
 public:
  using FlatBufferType = CollisionClipBoundsDef;

  CollisionClipBoundsDefT() {}

  lull::Aabb aabb;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

template <typename Archive>
void CollisionDefT::SerializeFlatbuffer(Archive archive) {
  archive.Scalar(&collision_on_exit, 4, 0);
  archive.Scalar(&interactive, 6, 1);
  archive.Scalar(&clip_outside_bounds, 8, 0);
}

template <typename Archive>
void CollisionClipBoundsDefT::SerializeFlatbuffer(Archive archive) {
  archive.NativeStruct(&aabb, 4);
}

}  // namespace lull

LULLABY_SETUP_TYPEID(lull::CollisionDefT);
LULLABY_SETUP_TYPEID(lull::CollisionClipBoundsDefT);

#endif  // _LULLABY_LULLABY_GENERATED_COLLISION_DEF_GENERATED_H_

