# new xpmax system

house_settings{

  events{

    when_a_player_breaks{

      conditional{

        condition: {
          stat requirement
          if xp greater or equal xpmax
        }
        then actions: {
          call function "levelup"  # SI ça n'est pas par une fonction réutiliser le ptit code de level up
          change stat: xpmax + xpmaxcoef
          change stat: xp = 0
        }

      }

    }
  
  }
  
}
