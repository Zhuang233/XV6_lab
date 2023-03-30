struct buf {
  int valid;   // has data been read from disk?（初始申请时为上一次其他地方的数据，valid应置0）
  int disk;    // does disk "own" buf?
  uint dev; //当前数据块所属的设备（device）编号
  uint blockno;
  struct sleeplock lock;
  uint refcnt; //当前数据块被引用的次数,为0则可回收
  struct buf *prev; // LRU cache list
  struct buf *next;
  uchar data[BSIZE];
};

