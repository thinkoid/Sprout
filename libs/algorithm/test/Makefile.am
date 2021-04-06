# -*- mode: makefile -*-

EXTRA_DIST =

include $(top_srcdir)/Makefile.common

AM_CPPFLAGS += $(BOOST_CPPFLAGS)
AM_LDFLAGS = $(BOOST_UNIT_TEST_FRAMEWORK_LDFLAGS)
LDADD = $(LIBS) $(BOOST_UNIT_TEST_FRAMEWORK_LIBS)

check_PROGRAMS =                                            \
	libs_algorithm_test_adjacent_find                       \
	libs_algorithm_test_algorithm                           \
	libs_algorithm_test_all_of                              \
	libs_algorithm_test_all_of_equal                        \
	libs_algorithm_test_any_of                              \
	libs_algorithm_test_any_of_equal                        \
	libs_algorithm_test_binary_search                       \
	libs_algorithm_test_bogo_sort                           \
	libs_algorithm_test_bogo_sort_result                    \
	libs_algorithm_test_bozo_sort                           \
	libs_algorithm_test_bozo_sort_result                    \
	libs_algorithm_test_clamp                               \
	libs_algorithm_test_clamp_range                         \
	libs_algorithm_test_clamp_range_copy                    \
	libs_algorithm_test_copy                                \
	libs_algorithm_test_copy_backward                       \
	libs_algorithm_test_copy_if                             \
	libs_algorithm_test_copy_n                              \
	libs_algorithm_test_copy_until                          \
	libs_algorithm_test_copy_while                          \
	libs_algorithm_test_count                               \
	libs_algorithm_test_count_if                            \
	libs_algorithm_test_equal                               \
	libs_algorithm_test_equal_range                         \
	libs_algorithm_test_fill_n                              \
	libs_algorithm_test_find                                \
	libs_algorithm_test_find_end                            \
	libs_algorithm_test_find_first_of                       \
	libs_algorithm_test_find_if                             \
	libs_algorithm_test_find_if_not                         \
	libs_algorithm_test_generate                            \
	libs_algorithm_test_generate_n                          \
	libs_algorithm_test_includes                            \
	libs_algorithm_test_inplace_merge                       \
	libs_algorithm_test_is_decreasing                       \
	libs_algorithm_test_is_heap                             \
	libs_algorithm_test_is_heap_until                       \
	libs_algorithm_test_is_increasing                       \
	libs_algorithm_test_is_partitioned                      \
	libs_algorithm_test_is_permutation                      \
	libs_algorithm_test_is_sorted                           \
	libs_algorithm_test_is_sorted_until                     \
	libs_algorithm_test_is_strictly_decreasing              \
	libs_algorithm_test_is_strictly_increasing              \
	libs_algorithm_test_lexicographical_compare             \
	libs_algorithm_test_lower_bound                         \
	libs_algorithm_test_make_heap                           \
	libs_algorithm_test_make_partial_heap                   \
	libs_algorithm_test_max                                 \
	libs_algorithm_test_max_element                         \
	libs_algorithm_test_merge                               \
	libs_algorithm_test_min                                 \
	libs_algorithm_test_min_element                         \
	libs_algorithm_test_minmax                              \
	libs_algorithm_test_minmax_element                      \
	libs_algorithm_test_mismatch                            \
	libs_algorithm_test_modifying                           \
	libs_algorithm_test_next_permutation                    \
	libs_algorithm_test_non_modifying                       \
	libs_algorithm_test_none_of                             \
	libs_algorithm_test_none_of_equal                       \
	libs_algorithm_test_nth_element                         \
	libs_algorithm_test_one_of                              \
	libs_algorithm_test_one_of_equal                        \
	libs_algorithm_test_partial_sort                        \
	libs_algorithm_test_partition                           \
	libs_algorithm_test_partition_copy                      \
	libs_algorithm_test_partition_point                     \
	libs_algorithm_test_pop_heap                            \
	libs_algorithm_test_prev_permutation                    \
	libs_algorithm_test_push_heap                           \
	libs_algorithm_test_random_swap                         \
	libs_algorithm_test_random_swap_result                  \
	libs_algorithm_test_recurrence                          \
	libs_algorithm_test_recurrence_n                        \
	libs_algorithm_test_remove                              \
	libs_algorithm_test_remove_copy                         \
	libs_algorithm_test_remove_copy_if                      \
	libs_algorithm_test_remove_if                           \
	libs_algorithm_test_replace                             \
	libs_algorithm_test_replace_copy                        \
	libs_algorithm_test_replace_copy_if                     \
	libs_algorithm_test_replace_if                          \
	libs_algorithm_test_reverse                             \
	libs_algorithm_test_reverse_copy                        \
	libs_algorithm_test_rotate                              \
	libs_algorithm_test_rotate_copy                         \
	libs_algorithm_test_search                              \
	libs_algorithm_test_search_n                            \
	libs_algorithm_test_set_difference                      \
	libs_algorithm_test_set_intersection                    \
	libs_algorithm_test_set_symmetric_difference            \
	libs_algorithm_test_set_union                           \
	libs_algorithm_test_shuffle                             \
	libs_algorithm_test_shuffle_result                      \
	libs_algorithm_test_sort                                \
	libs_algorithm_test_sort_heap                           \
	libs_algorithm_test_stable_partition                    \
	libs_algorithm_test_stable_partition_copy               \
	libs_algorithm_test_stable_sort                         \
	libs_algorithm_test_swap_element                        \
	libs_algorithm_test_swap_element_copy                   \
	libs_algorithm_test_transform                           \
	libs_algorithm_test_tristate_lexicographical_compare    \
	libs_algorithm_test_unfold                              \
	libs_algorithm_test_unfold_n                            \
	libs_algorithm_test_unique                              \
	libs_algorithm_test_unique_copy                         \
	libs_algorithm_test_upper_bound

TESTS = $(check_PROGRAMS)

libs_algorithm_test_adjacent_find_SOURCES = adjacent_find.cpp
libs_algorithm_test_algorithm_SOURCES = algorithm.cpp
libs_algorithm_test_all_of_SOURCES = all_of.cpp
libs_algorithm_test_all_of_equal_SOURCES = all_of_equal.cpp
libs_algorithm_test_any_of_SOURCES = any_of.cpp
libs_algorithm_test_any_of_equal_SOURCES = any_of_equal.cpp
libs_algorithm_test_binary_search_SOURCES = binary_search.cpp
libs_algorithm_test_bogo_sort_SOURCES = bogo_sort.cpp
libs_algorithm_test_bogo_sort_result_SOURCES = bogo_sort_result.cpp
libs_algorithm_test_bozo_sort_SOURCES = bozo_sort.cpp
libs_algorithm_test_bozo_sort_result_SOURCES = bozo_sort_result.cpp
libs_algorithm_test_clamp_SOURCES = clamp.cpp
libs_algorithm_test_clamp_range_SOURCES = clamp_range.cpp
libs_algorithm_test_clamp_range_copy_SOURCES = clamp_range_copy.cpp
libs_algorithm_test_copy_SOURCES = copy.cpp
libs_algorithm_test_copy_backward_SOURCES = copy_backward.cpp
libs_algorithm_test_copy_if_SOURCES = copy_if.cpp
libs_algorithm_test_copy_n_SOURCES = copy_n.cpp
libs_algorithm_test_copy_until_SOURCES = copy_until.cpp
libs_algorithm_test_copy_while_SOURCES = copy_while.cpp
libs_algorithm_test_count_SOURCES = count.cpp
libs_algorithm_test_count_if_SOURCES = count_if.cpp
libs_algorithm_test_equal_SOURCES = equal.cpp
libs_algorithm_test_equal_range_SOURCES = equal_range.cpp
libs_algorithm_test_fill_n_SOURCES = fill_n.cpp
libs_algorithm_test_find_SOURCES = find.cpp
libs_algorithm_test_find_end_SOURCES = find_end.cpp
libs_algorithm_test_find_first_of_SOURCES = find_first_of.cpp
libs_algorithm_test_find_if_SOURCES = find_if.cpp
libs_algorithm_test_find_if_not_SOURCES = find_if_not.cpp
libs_algorithm_test_generate_SOURCES = generate.cpp
libs_algorithm_test_generate_n_SOURCES = generate_n.cpp
libs_algorithm_test_includes_SOURCES = includes.cpp
libs_algorithm_test_inplace_merge_SOURCES = inplace_merge.cpp
libs_algorithm_test_is_decreasing_SOURCES = is_decreasing.cpp
libs_algorithm_test_is_heap_SOURCES = is_heap.cpp
libs_algorithm_test_is_heap_until_SOURCES = is_heap_until.cpp
libs_algorithm_test_is_increasing_SOURCES = is_increasing.cpp
libs_algorithm_test_is_partitioned_SOURCES = is_partitioned.cpp
libs_algorithm_test_is_permutation_SOURCES = is_permutation.cpp
libs_algorithm_test_is_sorted_SOURCES = is_sorted.cpp
libs_algorithm_test_is_sorted_until_SOURCES = is_sorted_until.cpp
libs_algorithm_test_is_strictly_decreasing_SOURCES = is_strictly_decreasing.cpp
libs_algorithm_test_is_strictly_increasing_SOURCES = is_strictly_increasing.cpp
libs_algorithm_test_lexicographical_compare_SOURCES = lexicographical_compare.cpp
libs_algorithm_test_lower_bound_SOURCES = lower_bound.cpp
libs_algorithm_test_make_heap_SOURCES = make_heap.cpp
libs_algorithm_test_make_partial_heap_SOURCES = make_partial_heap.cpp
libs_algorithm_test_max_SOURCES = max.cpp
libs_algorithm_test_max_element_SOURCES = max_element.cpp
libs_algorithm_test_merge_SOURCES = merge.cpp
libs_algorithm_test_min_SOURCES = min.cpp
libs_algorithm_test_min_element_SOURCES = min_element.cpp
libs_algorithm_test_minmax_SOURCES = minmax.cpp
libs_algorithm_test_minmax_element_SOURCES = minmax_element.cpp
libs_algorithm_test_mismatch_SOURCES = mismatch.cpp
libs_algorithm_test_modifying_SOURCES = modifying.cpp
libs_algorithm_test_next_permutation_SOURCES = next_permutation.cpp
libs_algorithm_test_non_modifying_SOURCES = non_modifying.cpp
libs_algorithm_test_none_of_SOURCES = none_of.cpp
libs_algorithm_test_none_of_equal_SOURCES = none_of_equal.cpp
libs_algorithm_test_nth_element_SOURCES = nth_element.cpp
libs_algorithm_test_one_of_SOURCES = one_of.cpp
libs_algorithm_test_one_of_equal_SOURCES = one_of_equal.cpp
libs_algorithm_test_partial_sort_SOURCES = partial_sort.cpp
libs_algorithm_test_partition_SOURCES = partition.cpp
libs_algorithm_test_partition_copy_SOURCES = partition_copy.cpp
libs_algorithm_test_partition_point_SOURCES = partition_point.cpp
libs_algorithm_test_pop_heap_SOURCES = pop_heap.cpp
libs_algorithm_test_prev_permutation_SOURCES = prev_permutation.cpp
libs_algorithm_test_push_heap_SOURCES = push_heap.cpp
libs_algorithm_test_random_swap_SOURCES = random_swap.cpp
libs_algorithm_test_random_swap_result_SOURCES = random_swap_result.cpp
libs_algorithm_test_recurrence_SOURCES = recurrence.cpp
libs_algorithm_test_recurrence_n_SOURCES = recurrence_n.cpp
libs_algorithm_test_remove_SOURCES = remove.cpp
libs_algorithm_test_remove_copy_SOURCES = remove_copy.cpp
libs_algorithm_test_remove_copy_if_SOURCES = remove_copy_if.cpp
libs_algorithm_test_remove_if_SOURCES = remove_if.cpp
libs_algorithm_test_replace_SOURCES = replace.cpp
libs_algorithm_test_replace_copy_SOURCES = replace_copy.cpp
libs_algorithm_test_replace_copy_if_SOURCES = replace_copy_if.cpp
libs_algorithm_test_replace_if_SOURCES = replace_if.cpp
libs_algorithm_test_reverse_SOURCES = reverse.cpp
libs_algorithm_test_reverse_copy_SOURCES = reverse_copy.cpp
libs_algorithm_test_rotate_SOURCES = rotate.cpp
libs_algorithm_test_rotate_copy_SOURCES = rotate_copy.cpp
libs_algorithm_test_search_SOURCES = search.cpp
libs_algorithm_test_search_n_SOURCES = search_n.cpp
libs_algorithm_test_set_difference_SOURCES = set_difference.cpp
libs_algorithm_test_set_intersection_SOURCES = set_intersection.cpp
libs_algorithm_test_set_symmetric_difference_SOURCES = set_symmetric_difference.cpp
libs_algorithm_test_set_union_SOURCES = set_union.cpp
libs_algorithm_test_shuffle_SOURCES = shuffle.cpp
libs_algorithm_test_shuffle_result_SOURCES = shuffle_result.cpp
libs_algorithm_test_sort_SOURCES = sort.cpp
libs_algorithm_test_sort_heap_SOURCES = sort_heap.cpp
libs_algorithm_test_stable_partition_SOURCES = stable_partition.cpp
libs_algorithm_test_stable_partition_copy_SOURCES = stable_partition_copy.cpp
libs_algorithm_test_stable_sort_SOURCES = stable_sort.cpp
libs_algorithm_test_swap_element_SOURCES = swap_element.cpp
libs_algorithm_test_swap_element_copy_SOURCES = swap_element_copy.cpp
libs_algorithm_test_transform_SOURCES = transform.cpp
libs_algorithm_test_tristate_lexicographical_compare_SOURCES = tristate_lexicographical_compare.cpp
libs_algorithm_test_unfold_SOURCES = unfold.cpp
libs_algorithm_test_unfold_n_SOURCES = unfold_n.cpp
libs_algorithm_test_unique_SOURCES = unique.cpp
libs_algorithm_test_unique_copy_SOURCES = unique_copy.cpp
libs_algorithm_test_upper_bound_SOURCES = upper_bound.cpp
