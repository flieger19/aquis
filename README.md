# aquis
**AQUIS** -**A**gricultural **QU**est**I**onnaire **S**canner: Is an application which uses [OpenCV](https://opencv.org) and [Qt](https://www.qt.io) for automatically evaluet Questionaires. The idea is originating from agricultural sciences. The questionnaires mainly consist of closed questions, so that the scanner has to recognize if a check box has been checked or not.


## TODO

### Detection
- [ ] how to set parameters in the folowing function to optimize recognition of checkboxes: ```adaptiveThreshold(~imageGray, imageBinary, 255,CV_ADAPTIVE_THRESH_MEAN_C, cv::THRESH_BINARY, 15,-10);```
- [ ] how to optimize the filter for opject, frame and text detection on the questionnaires
- [ ] code the detection algorithmus
- [ ] code the detection filter
- [ ] implement a ROI (region of interesst)

### GUI
- [ ] Resizing of windows
- [ ] menu bar
- [ ] tool bar
- [ ] icons
- [ ] spash screen
- [ ] variable view

### File IO
- [ ] import and export of the questionnaires
- [ ] which formats can be used for the questionnaires
- [ ] settings of the Application
- [ ] save project info
- [ ] export evalueted data to csv
