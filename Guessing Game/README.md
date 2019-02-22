 Guessing game algorithm implemented using classes.
 This game can be used to verify the binary search algorithm in the sense that if
 one guesses using the binary search method, they will get the correct guesses
 within the maximum possible number of attempts for a given range as is stipulated
 by the binary search method. 

				GAME ALGORITHIM TO BE IMPLEMENTED

					   -------------------
					  |ASK FOR PLAYER NAME |
					   -------------------
							    	|
							    	V
					 ------------------------
					|PICK RANDOM NUMBER 1:100|													
					 ------------------------
							    	|
							    	V
					 -------------------------
	       |TAKE A GUESS FROM PLAYER |<--------------------|
					 -------------------------                     |
								    |                                    |
								    V                                    |
					  ------------------------             ---------------------
    	     | DECIDE HIGHER OR LOWER |           | INCREMENT THE COUNT |  	           
				    ------------------------             ---------------------
				                                                 |
						    		|                                    |
							    	V                                    |
					                                               |
							    	|                                    |
							    	V                                    |
			        /-------------\  IF NOT CORRECT            |
		         / GUSSED NUMBER \-------------------------->|
						 \   CORRECT?    /
						  \-------------/
							    	| IF YES
							    	V
					 ---------------------
					| CONGRATULATE PLAYER |			
					 ---------------------
