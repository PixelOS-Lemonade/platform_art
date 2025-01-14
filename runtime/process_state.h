/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_RUNTIME_PROCESS_STATE_H_
#define ART_RUNTIME_PROCESS_STATE_H_

#include "base/macros.h"

namespace art HIDDEN {

// The process state passed in from the activity manager, used to determine when to do trimming
// and compaction.
enum ProcessState {
  kProcessStateJankPerceptible = 0,
  kProcessStateJankImperceptible = 1,
};

std::ostream& operator<<(std::ostream& os, ProcessState process_state);

}  // namespace art

#endif  // ART_RUNTIME_PROCESS_STATE_H_
