# Get-image-size-target-for-ctp
Get the next bigger or smaller width and length of a image, for using ctp by Deorder. It is made to be small and avoid unnecessary clutter

# Arguments:
-e (get the next bigger supported width and length)
-r (get the next smaller supported width and length)

# Input
<binaryName> <Argument (see above)> <title size> <width> <length>

# Output
width (the new target width)
length (the new target length)

# Output smaller than zero codes
-1 = number is fine (doesn't need to be changed)
