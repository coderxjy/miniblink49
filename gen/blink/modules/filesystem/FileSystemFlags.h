// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef FileSystemFlags_h
#define FileSystemFlags_h

#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT FileSystemFlags {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    FileSystemFlags();

    bool hasCreateFlag() const { return !m_createFlag.isNull(); }
    bool createFlag() const { return m_createFlag.get(); }
    void setCreateFlag(bool value) { m_createFlag = value; }

    bool hasExclusive() const { return !m_exclusive.isNull(); }
    bool exclusive() const { return m_exclusive.get(); }
    void setExclusive(bool value) { m_exclusive = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_createFlag;
    Nullable<bool> m_exclusive;

    friend class V8FileSystemFlags;
};

} // namespace blink

#endif // FileSystemFlags_h