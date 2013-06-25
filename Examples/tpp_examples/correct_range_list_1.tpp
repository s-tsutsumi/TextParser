// -*- Mode: c++ -*-
config {
       nopt = 3
       cell_start = (0.,0.,0.)
       cell_end = (100.,100.,100.)
       gridx1 = @range(0.,5.)
       gridx2 = @range(5.,0.)
       gridx3 = @range(50.,89.4,7.)
	 //       gridx3 = @range(89.4,50.,7.)

       gridx31 = @range(-89.4,-50.,7.)
	 //       gridx32 = @range(-50,-89.4,7.)
	 gridx32 = @range(-50,-89.4,-7.)
	 //       gridx33 = @range(50.,89.4,-7.)
	 gridx33 = @range(50.,89.4,7.)
       gridx34 = @range(89.4,
			50.,-7.)

       gridx4 = @list(19,0.4,

		      -3,10.3,-3.0) // comments and ...
       gridx5 = @list(-19.,0.4,-3,10.3)
	 
       test_char_min = CHAR_MIN
       test_char_max = CHAR_MAX
       test_short_min = SHORT_MIN
       test_short_max = SHORT_MAX
       test_int_min = INT_MIN
       test_int_max = INT_MAX

       test_long_min = LONG_MIN
       test_long_max = LONG_MAX

       test_longlong_min = LONGLONG_MIN
       test_longlong_max = LONGLONG_MAX

       test_float_min = FLOAT_MIN
       test_float_max = FLOAT_MAX

       test_double_min = DOUBLE_MIN
       test_double_max = DOUBLE_MAX

 minivec = (CHAR_MIN,SHORT_MIN,INT_MIN,LONG_MIN,LONGLONG_MIN)
 maxivec = (CHAR_MAX,SHORT_MAX,INT_MAX,LONG_MAX,LONGLONG_MAX)
 minfvec = (FLOAT_MIN,DOUBLE_MIN)
 maxfvec = (FLOAT_MAX,DOUBLE_MAX)

   limit_grid_range = @range(DOUBLE_MIN,DOUBLE_MAX,DOUBLE_MIN)
   limit_grid_list = @list(DOUBLE_MIN,FLOAT_MIN,DOUBLE_MAX,CHAR_MIN)

}
