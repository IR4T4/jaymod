#ifndef GAME_CMD_UNLOCK_H
#define GAME_CMD_UNLOCK_H

///////////////////////////////////////////////////////////////////////////////

class Unlock : public AbstractBuiltin
{
protected:
    PostAction doExecute( Context& );

public:
    Unlock();
    ~Unlock();
};

///////////////////////////////////////////////////////////////////////////////

#endif // GAME_CMD_UNLOCK_H