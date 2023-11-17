#pragma once

#include "Stack.h"
#include <vector>

class Game{
    public:
        Game();
        void solve();

        //allows us to write out the object
        friend std::ostream& operator<<(std::ostream & os, const Game & game);

    private:
        std::vector<Stack> stacks_;

};