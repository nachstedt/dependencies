// Filename: rectangleEmitter.h
// Created by:  charles (22Jun00)
//
////////////////////////////////////////////////////////////////////
//
// PANDA 3D SOFTWARE
// Copyright (c) Carnegie Mellon University.  All rights reserved.
//
// All use of this software is subject to the terms of the revised BSD
// license.  You should have received a copy of this license along
// with this source code in a file named "LICENSE."
//
////////////////////////////////////////////////////////////////////

#ifndef RECTANGLEEMITTER_H
#define RECTANGLEEMITTER_H

#include "baseParticleEmitter.h"

////////////////////////////////////////////////////////////////////
//       Class : RectangleEmitter
// Description : Describes a planar square region in which
//               particles are generated.
////////////////////////////////////////////////////////////////////
class EXPCL_PANDAPHYSICS RectangleEmitter : public BaseParticleEmitter {
PUBLISHED:
  RectangleEmitter();
  RectangleEmitter(const RectangleEmitter &copy);
  virtual ~RectangleEmitter();

  virtual BaseParticleEmitter *make_copy();

  INLINE void set_min_bound(const LPoint2& vmin);
  INLINE void set_max_bound(const LPoint2& vmax);

  INLINE LPoint2 get_min_bound() const;
  INLINE LPoint2 get_max_bound() const;

  virtual void output(ostream &out) const;
  virtual void write(ostream &out, int indent=0) const;

private:
  LPoint2 _vmin;
  LPoint2 _vmax;

  // CUSTOM EMISSION PARAMETERS
  // none

  virtual void assign_initial_position(LPoint3& pos);
  virtual void assign_initial_velocity(LVector3& vel);
};

#include "rectangleEmitter.I"

#endif // RECTANGLEEMITTER_H
