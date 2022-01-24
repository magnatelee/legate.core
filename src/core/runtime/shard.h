/* Copyright 2021-2022 NVIDIA Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once

#include "legion.h"

#include "core/mapping/grid.h"
#include "core/runtime/context.h"

namespace legate {

void register_legate_core_sharding_functors(Legion::Runtime* runtime,
                                            const LibraryContext& context);

void register_new_tiling_functor(Legion::Runtime* runtime,
                                 Legion::ShardingID sharding_id,
                                 const mapping::Grid& proc_grid,
                                 const mapping::Grid& shard_grid);

Legion::ShardingID find_sharding_functor_by_projection_functor(Legion::ProjectionID proj_id);

}  // namespace legate
