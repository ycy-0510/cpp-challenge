itch (i % 4)
        {
        case 0:
            cout << 'R' << (int)s[i] - 48;
            for (int j = 0; j < (int)s[i] - 48; j++)
            {
                if (x + 1 < C)
                {
                    x++;
                    space[x][y] = 1;
                }
            }
            break;
        case 1:
            cout << 'D' << (int)s[i] - 48;
            for (int j = 0; j < (int)s[i] - 48; j++)
            {
                if (y + 1 < R)
                {
                    y++;
                    space[x][y] = 1;
                }
            }
            break;
        case 2:
            cout << 'L' << (int)s[i] - 48;
            for (int j = 0; j < (int)s[i] - 48; j++)
            {
                if (x - 1 >= 0)
                {
                    x--;
                    space[x][y] = 1;
                }
            }
            break;
        case 3:
            cout << 'U' << (int)s[i] - 48;
            for (int j = 0; j < (int)s[i] - 48; j++)
            {
                if (y - 1 >= 0)
                {
                    y--;
                    space[x][y] = 1;
                }
            }
            break;
        }