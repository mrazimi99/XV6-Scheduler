#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
  if(argc != 3)
  {
    printf(2, "wrong input: set_tickets pid tickets\n");
    exit();
  }

  set_tickets(atoi(argv[1]), atoi(argv[2]));
  exit();
}
