#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
  if(argc != 3){
    printf(2, "wrong input: set_queue pid queue_number\n");
    exit();
  }

  set_queue(atoi(argv[1]), atoi(argv[2]));
  exit();
}
