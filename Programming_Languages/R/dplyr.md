# dplyr revision

`dplyr` provides a set of verbs for data manipulation operations, making it easier and more intuitive to work with data in R.

## 1. Installation & Loading

```R
install.packages("dplyr")
library(dplyr)
```

## 2. Core Functions

### 2.1. `filter()`

Used for row-wise subsetting based on conditions.

```R
data %>% filter(column_name == "value")
```

### 2.2. `select()`

Choose which columns to keep.

```R
data %>% select(column_name1, column_name2)
```

### 2.3. `arrange()`

Sort data by column values. Use `desc()` for descending order.

```R
data %>% arrange(column_name)
data %>% arrange(desc(column_name))
```

### 2.4. `mutate()`

Add new variables or transform existing ones.

```R
data %>% mutate(new_column = old_column * 2)
```

### 2.5. `summarise()` or `summarize()`

Summarize data, often used with `group_by()`.

```R
data %>% group_by(column_name) %>% summarise(mean_value = mean(another_column, na.rm = TRUE))
```

### 2.6. `group_by()`

Group data by unique values in columns.

```R
data %>% group_by(column_name1, column_name2)
```

## 3. Joins

`dplyr` provides various functions to join two data frames:

- **inner_join()**: Returns only rows that have matching values in both data frames.
- **left_join()**: Returns all rows from the left data frame and matched rows from the right data frame.
- **right_join()**: Opposite of `left_join()`.
- **full_join()**: Returns all rows when there's a match in one of the data frames.
- **semi_join()**: Returns all rows from the left data frame where there are matching values in the right data frame.
- **anti_join()**: Drops all rows from the left data frame where there are matching values in the right data frame.

```R
left_data %>% inner_join(right_data, by = "key_column")
```

## 4. Piping (`%>%`)

The pipe operator (`%>%`) is used to chain multiple operations. It takes the output from the left and uses it as the first argument of the function on the right.

```R
data %>% 
  filter(column_name == "value") %>%
  select(column_name1, column_name2) %>%
  arrange(desc(column_name1))
```

## 5. Other Helpful Functions

- **`n()`**: Counts the number of rows.
- **`n_distinct()`**: Counts the number of distinct values.
- **`first()`**, **`last()`**: Gets the first or last element of a vector.
- **`pull()`**: Extracts a column by name (or position) as a vector.