# Pandas in-depth revision

Pandas provides powerful and flexible tools to work with structured data seamlessly. At its core are two primary data structures: `Series` and `DataFrame`.

## 1. Importing the Library

```python
import pandas as pd
```

## 2. Series

`Series` is a one-dimensional labeled array.

```python
s = pd.Series([1, 2, 3, 4], index=['a', 'b', 'c', 'd'])
```

- Elements can be accessed by their label (`s['a']`) or position (`s[0]`).

## 3. DataFrame

`DataFrame` is a two-dimensional table of data with rows and columns.

```python
df = pd.DataFrame({
    'A': [1, 2, 3],
    'B': [4, 5, 6],
    'C': ['p', 'q', 'r']
})
```

### Basic Operations:

- **Selection**: `df['A']` or `df.A` returns the 'A' column.
- **Addition**: `df['D'] = [7, 8, 9]` adds a new column 'D'.
- **Deletion**: `df.drop('A', axis=1, inplace=True)` drops the 'A' column.
- **Row Selection**: `df.iloc[0]` or `df.loc['index_name']`.

## 4. Data Loading and Saving

```python
# Loading
df_csv = pd.read_csv('filename.csv')
df_excel = pd.read_excel('filename.xlsx', sheet_name='Sheet1')

# Saving
df.to_csv('filename.csv', index=False)
df.to_excel('filename.xlsx', sheet_name='Sheet1', index=False)
```

## 5. Data Cleaning

- **Handling Missing Data**:
  - Drop: `df.dropna()`
  - Fill: `df.fillna(value)`

- **Duplicates**: `df.drop_duplicates(inplace=True)`
- **Set Data Types**: `df['A'] = df['A'].astype('int32')`

## 6. Data Exploration

- `df.head()`, `df.tail()`: Top and bottom rows.
- `df.describe()`: Summary statistics.
- `df.info()`: Info on columns.
- `df['A'].value_counts()`: Frequency counts.

## 7. Operations

- **Apply**: `df['A'].apply(lambda x: x*2)`
- **Filter**: `df[df['A'] > 2]`
- **GroupBy**: 
  ```python
  df.groupby('A').sum()
  df.groupby(['A', 'B']).mean()
  ```

## 8. Merging, Joining, and Concatenating

- **Concatenate**:
  ```python
  pd.concat([df1, df2], axis=0)  # Row-wise
  pd.concat([df1, df2], axis=1)  # Column-wise
  ```

- **Merge (like SQL's JOIN)**:
  ```python
  pd.merge(left=df1, right=df2, on='key_column', how='inner')
  ```

- **Join**: `df1.join(df2, on='key_column', how='left')`

## 9. Time Series

Pandas is also robust for time series data.

- **Date Range**: `pd.date_range('20230101', periods=5)`
- **Resample**: 
  ```python
  time_series.resample('D').sum()  # Resamples data by day.
  ```

## 10. Visualization

Pandas integrates well with `matplotlib`.

```python
import matplotlib.pyplot as plt

df.plot(x='A', y='B', kind='scatter')
plt.show()
```