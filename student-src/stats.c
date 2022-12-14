#include "stats.h"

/* The stats. See the definition in stats.h. */
stats_t stats;

/**
 * --------------------------------- PROBLEM 10 --------------------------------------
 * Checkout PDF section 10 for this problem
 * 
 * Calulate the total average time it takes for an access
 * 
 * HINTS:
 * 		- You may find the #defines in the stats.h file useful.
 * 		- You will need to include code to increment many of these stats in
 * 		the functions you have written for other parts of the project.
 * -----------------------------------------------------------------------------------
 */
void compute_stats() {
    uint64_t time_access = MEMORY_ACCESS_TIME * stats.accesses;
    uint64_t time_page_fault = DISK_PAGE_READ_TIME * stats.page_faults;
    uint64_t time_writeback = DISK_PAGE_WRITE_TIME * stats.writebacks;
    stats.amat = (time_writeback + time_page_fault + time_access)/(double)(stats.accesses);
}
