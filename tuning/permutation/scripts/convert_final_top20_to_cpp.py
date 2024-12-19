def convert_string(input_string):
  """Converts a string of numbers to a C++-like function call.

  Args:
    input_string: The input string to be converted.

  Returns:
    The converted string in the desired format.
  """

  instance_numbers, _ = input_string.split(',')
  numbers = instance_numbers.split('_')[1:]  # Skip the first number
  template = "addInstance<{}, {}, {}, {}, {}, ck::Sequence<{}, {}>, ck::Sequence<{}>, ck::Sequence<{}>>({});"
  formatted_string = template.format(*numbers, 'opPtrs')

  return formatted_string

def convert_file(input_filename, output_filename):
  """Converts lines of a file to the desired format and saves the result.

  Args:
    input_filename: The name of the input file.
    output_filename: The name of the output file.

  Returns:
    None
  """

  with open(input_filename, 'r') as input_file, open(output_filename, 'w') as output_file:
    for line in input_file:
      output_string = convert_string(line.strip())
      output_file.write(output_string + '\n')

# Example usage:
input_filename = 'final_top20.txt'
output_filename = 'final_top20.cpp'
convert_file(input_filename, output_filename)
