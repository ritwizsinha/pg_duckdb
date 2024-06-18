#pragma once

#include "duckdb.hpp"

extern "C" {
#include "postgres.h"
}

#include <mutex>

namespace quack {

Datum DetoastPostgresDatum(struct varlena *value, std::mutex &lock, bool *shouldFree);

} // namespace quack