#include <time.h>
#include <sys/types.h>
#define MMIP "127.0.0.1"//"172.16.231.207";//"130.203.100.56";
#define MMPORT "10000"//MM's IP&PORT


#define PFS_BLOCK_SIZE 1 // 1 Kilobyte
#define STRIP_SIZE 4     // 4 blocks
#define NUM_FILE_SERVERS 1//5
#define CLIENT_CACHE_SIZE 2 // 2 Megabytes

struct pfs_stat {
  time_t pst_mtime; /* time of last data modification */
  time_t pst_ctime; /* time of creation */
  off_t pst_size;    /* File size in bytes */
};
