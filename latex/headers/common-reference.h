// Copyright (c) 2012-2020 The Khronos Group Inc.
//
// Licensed under the Apache License, Version 2.0 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an AS IS BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

namespace cl {
namespace sycl {

class T {
  ...

 public:
  T(const T &rhs);

  T(T &&rhs);

  T &operator=(const T &rhs);

  T &operator=(T &&rhs);

  ~T();
    
  ...

  friend bool operator==(const T &lhs, const T &rhs) { /* ... */ }

  friend bool operator!=(const T &lhs, const T &rhs) { /* ... */ }

  ...
};
}  // namespace sycl
}  // namespace cl
