#include <ctime>
#include <osquery/core/tables.h>

namespace osquery {
namespace tables {

QueryData genTimeExample(QueryContext &context) {
    QueryData rows;

    Row r;

    time_t _time = time(0);
    struct tm *now = localtime(&_time);

    r["hour"] = now->tm_hour;
    r["minutes"] = now->tm_min;
    r["seconds"] = now->tm_sec;

    rows.push_back(std::move(r));
    return rows;
}
} // namespace tables
} // namespace osquery
